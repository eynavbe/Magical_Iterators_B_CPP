#include "MagicalContainer.hpp"
using namespace std;

namespace ariel {
    void MagicalContainer::addElement (int number) {    
        auto it = std::lower_bound(mysticalElementsArray.begin(), mysticalElementsArray.end(), number);
        if(isPrime(number)){
            auto itPrime = std::lower_bound(primeArray.begin(), primeArray.end(), number);
            primeArray.insert(itPrime, number);
        }
        mysticalElementsArray.insert(it, number);
    }

    void MagicalContainer::removeElement (int number) {
        auto it = std::lower_bound(mysticalElementsArray.begin(), mysticalElementsArray.end(), number);
        if (*it == number) {
            this->mysticalElementsArray.erase(it);
            if(isPrime(number)){
                auto itPrime = std::lower_bound(primeArray.begin(), primeArray.end(), number);
                if (*itPrime == number) {
                    this->primeArray.erase(itPrime);
                }
            }
        }else{
            throw std::runtime_error("error removeElement");
        }
        
    }

    int MagicalContainer::size () {
        return getElementsArray().size();
    }

    int MagicalContainer::sizePrime () {
        return getElementsPrimeArray().size();
    }
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++() {
        if(currentIndex >= this->container->size()){
            throw std::runtime_error("error runtime");
        }
        ++currentIndex;
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other) const {
        if((this != &other)){
            throw std::runtime_error("error runtime");
        }
        return true;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const {
        return currentIndex == other.currentIndex && container == other.container;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const {
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)] < 
        other.container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(other.currentIndex)] ;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const {
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)] >
        other.container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(other.currentIndex)] ;
    }

    int MagicalContainer::AscendingIterator::operator*() {
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)];
    }


    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()  {        
        return AscendingIterator(*container);
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()  {
        AscendingIterator iter1(*this); 
        iter1.currentIndex = iter1.getContainer()->size();
        return iter1;
    }




    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++() {
        if(currentIndexSide >= this->container->size()){
            throw std::runtime_error("error runtime");
        }
        ++currentIndexSide;
        if (currentIndexSide % 2 == 0) {
            currentIndex = currentIndexSide / 2;
        } else {
            currentIndex = container->size() - 1 - currentIndexSide / 2;
        }
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other) const {
        if((this != &other)){
            throw std::runtime_error("error runtime");
        }
        return true;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const {
        return currentIndex == other.currentIndex &&  currentIndexSide == other.currentIndexSide && container == other.container;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const {
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)] <
        other.container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(other.currentIndex)] ;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const {
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)] >
        other.container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(other.currentIndex)] ;
    }

    int MagicalContainer::SideCrossIterator::operator*()  {   
        return this->container->mysticalElementsArray[static_cast<std::vector<int>::size_type>(currentIndex)];
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() {     
        return SideCrossIterator(*container);
    }
        
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()  {
        SideCrossIterator iter1(*this); 
        iter1.setCurrentIndex(iter1.getContainer()->size()/ 2); 
        iter1.setCurrentIndexSide(iter1.getContainer()->size()); 
        return iter1;
    }




    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++() {
        if(currentIndex >= this->container->sizePrime()){
            throw std::runtime_error("error removeElement");
        }
        ++currentIndex;
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const {
        return currentIndex == other.currentIndex && container == other.container;
    }

    bool MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other) const {
        if((this != &other)){
            throw std::runtime_error("error runtime");
        }
        return true;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const {
        return !(*this == other);
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const {
        return currentIndex < other.currentIndex;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const {
        return currentIndex > other.currentIndex;
    }

    int MagicalContainer::PrimeIterator::operator*()  {   
        return this->container->primeArray[static_cast<std::vector<int>::size_type>(currentIndex)];
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()  {  
        PrimeIterator iter1(*this); 
        iter1.currentIndex = 0;
        return iter1;  
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()  {
        PrimeIterator iter1(*this); 
        iter1.currentIndex = this->container->sizePrime();
        return iter1;  
    }
}