#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
#ifndef MAGICALCONTAINER_H
#define MAGICALCONTAINER_H
namespace ariel
{
    class MagicalContainer {
		private:
            std::vector<int> mysticalElementsArray;
            std::vector<int> primeArray;
            bool isPrime(int num) const {
                    if (num <= 1)
                        return false;
                    for (int i = 2; i * i <= num; i++) {
                        if (num % i == 0)
                            return false;
                    }
                    return true;
                }

		public:
            std::vector<int> getElementsArray(){
                return mysticalElementsArray;
            }
            std::vector<int> getElementsPrimeArray(){
                return primeArray;
            }
            void addElement (int number) ;
            void removeElement (int number) ;
            int size () ;
            int sizePrime () ;
            
        class AscendingIterator {
            private:
                MagicalContainer* container;
                int currentIndex;
            public:
                AscendingIterator( MagicalContainer&   cont) : container(&cont), currentIndex(0) {}
                int operator*() ;
                MagicalContainer*  getContainer(){
                    return container;
                }
                int getCurrentIndex(){
                    return currentIndex;
                }
                void setCurrentIndex(int newCurrentIndex){
                    currentIndex = newCurrentIndex;
                }
                AscendingIterator& operator++() ;
                bool operator=(const AscendingIterator& other) const;
                bool operator==(const AscendingIterator& other) const;
                bool operator!=(const AscendingIterator& other) const;
                bool operator>(const AscendingIterator& other) const;
                bool operator<(const AscendingIterator& other) const;
                AscendingIterator end()  ;
                AscendingIterator begin() ;
        };
        
        class PrimeIterator {
            private:
                MagicalContainer* container;
                int currentIndex;
            public:
                PrimeIterator( MagicalContainer& cont) : container(&cont), currentIndex(0) { }
                int operator*() ;  
                MagicalContainer* getContainer(){
                    return container;
                }
                int getCurrentIndex(){
                    return currentIndex;
                }
                void setCurrentIndex(int newCurrentIndex){
                    currentIndex = newCurrentIndex;
                }
                PrimeIterator& operator++() ;
                bool operator==(const PrimeIterator& other) const;
                bool operator=(const PrimeIterator& other) const;
                bool operator!=(const PrimeIterator& other) const;
                bool operator>(const PrimeIterator& other) const;
                bool operator<(const PrimeIterator& other) const;
                PrimeIterator end()  ;
                PrimeIterator begin() ;
	    };

        class SideCrossIterator {
            private:
                MagicalContainer *container;
                int currentIndex;
                int currentIndexSide;
            public:
                SideCrossIterator( MagicalContainer& cont) : container(&cont), currentIndex(0),currentIndexSide(0) {}
                MagicalContainer* getContainer(){
                    return container;
                }
                int getCurrentIndex(){
                    return currentIndex;
                }
                void setCurrentIndex(int newCurrentIndex){
                    currentIndex = newCurrentIndex;
                }
                void setCurrentIndexSide(int newCurrentIndex){
                    currentIndexSide = newCurrentIndex;
                }
                int operator*() ;  
                SideCrossIterator& operator++() ;
                bool operator==(const SideCrossIterator& other) const;
                bool operator!=(const SideCrossIterator& other) const;
                bool operator>(const SideCrossIterator& other) const;
                bool operator<(const SideCrossIterator& other) const;
                bool operator=(const SideCrossIterator& other) const;
                SideCrossIterator end()  ;
                SideCrossIterator begin() ;
        };
	};
}
#endif