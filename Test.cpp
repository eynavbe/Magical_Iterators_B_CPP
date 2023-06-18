#include "doctest.h"
#include <stdexcept>
#include "sources/MagicalContainer.hpp" 
using namespace std;
using namespace ariel;

// TEST_CASE("addElement and size and removeElement"){
    // MagicalContainer container;
    // container.addElement(17);
    // CHECK(container.size()== 1);

    // container.addElement(2);
    // container.addElement(25);
    // container.addElement(9);
    // container.addElement(3);
    // CHECK(container.size()== 5);


    // container.removeElement(17);
    // CHECK(container.size()== 4);
    // CHECK_NOTHROW(container.removeElement(25));
    // CHECK_THROWS(container.removeElement(1));

    // CHECK(container.size()== 3);
    // container.removeElement(3);
    // CHECK(container.size()== 2);


}
// TEST_CASE("operator*"){
//     MagicalContainer container;
//     container.addElement(17);
//     container.addElement(2);
//     container.addElement(25);
//     container.addElement(9);
//     container.addElement(3);

//     MagicalContainer::AscendingIterator ascIter(container);
//     MagicalContainer::SideCrossIterator crossIter(container);
//     MagicalContainer::PrimeIterator primeIter(container);
//     auto it = ascIter.begin();
//     CHECK(*it == 2);
//     auto it2 = crossIter.begin();
//     CHECK(*it2 == 2);
//     auto it3 = primeIter.begin();
//     CHECK(*it3 == 2);
    
// }
// TEST_CASE("AscendingIterator addElement end begin == != ++ * "){
//     MagicalContainer container;
//     container.addElement(17);
//     container.addElement(2);
//     container.addElement(25);
//     container.addElement(9);
//     container.addElement(3);

//     MagicalContainer::AscendingIterator ascIter(container);

//     auto it = ascIter.begin();
//     CHECK(*it == 2);
//     ++it;
//     CHECK(*it == 3);
//     ++it;
//     CHECK(*it == 9);
//     ++it;
//                     auto it2 =  ascIter.end();
//     CHECK(*it != *it2);
//             CHECK_FALSE(*it == *it2);


//     CHECK(*it == 17);
//                         CHECK_FALSE(*it != 17);

//     ++it;

//     CHECK(*it == 25);
//     CHECK(*it == *it2);


// }
// TEST_CASE("AscendingIterator > < == !="){
//     MagicalContainer container;
//     container.addElement(18);
//     container.addElement(3);
//     container.addElement(26);
//     container.addElement(10);
//     container.addElement(4);

//     MagicalContainer::AscendingIterator ascIter(container);

//     MagicalContainer container2;
//     container2.addElement(17);
//     container2.addElement(2);
//     container2.addElement(25);
//     container2.addElement(9);
//     container2.addElement(3);

//     MagicalContainer::AscendingIterator ascIter2(container2);
//     CHECK_FALSE((ascIter > ascIter2));
//     CHECK_FALSE(!(ascIter < ascIter2));
//     CHECK_FALSE((ascIter == ascIter2));
//     CHECK((ascIter != ascIter2));
//     CHECK((ascIter < ascIter2));
//     CHECK(!(ascIter > ascIter2));
// }

// TEST_CASE("SideCrossIterator addElement end begin == != ++ * "){

//     MagicalContainer container;
//     container.addElement(17);
//     container.addElement(2);
//     container.addElement(25);
//     container.addElement(9);
//     container.addElement(3);

//     MagicalContainer::SideCrossIterator crossIter(container);
//     auto it = crossIter.begin();
//     CHECK(*it == 2);
//     ++it;
//     CHECK(*it == 25);
//     ++it;
//     CHECK(*it == 3);
//     ++it;
//     CHECK(*it == 17);
//     CHECK_FALSE(*it != 17);

//     auto it2 =  crossIter.end();
//     CHECK(*it != *it2);
//     CHECK_FALSE(*it == *it2);

//     ++it;
            

//     CHECK(*it == 9);


//     CHECK(*it == *it2);



// }

// TEST_CASE("SideCrossIterator > < == !="){
//     MagicalContainer container;
//     container.addElement(18);
//     container.addElement(3);
//     container.addElement(26);
//     container.addElement(10);
//     container.addElement(4);

//     MagicalContainer::SideCrossIterator crossIter(container);

//     MagicalContainer container2;
//     container2.addElement(17);
//     container2.addElement(2);
//     container2.addElement(25);
//     container2.addElement(9);
//     container2.addElement(3);

//     MagicalContainer::SideCrossIterator crossIter2(container2);
//     CHECK_FALSE((crossIter > crossIter2));
//     CHECK_FALSE(!(crossIter < crossIter2));
//     CHECK_FALSE((crossIter == crossIter2));
//     CHECK((crossIter != crossIter2));
//     CHECK((crossIter < crossIter2));
//     CHECK(!(crossIter > crossIter2));
// }

// TEST_CASE("PrimeIterator addElement end begin == != ++ * "){
//     MagicalContainer container;
//     container.addElement(17);
//     container.addElement(2);
//     container.addElement(25);
//     container.addElement(9);
//     container.addElement(3);

//     MagicalContainer::PrimeIterator primeIter(container);
//     auto it = primeIter.begin();
//     CHECK(*it == 2);
//     ++it;
//     CHECK(*it == 3);
//     auto it2 =  primeIter.end();
//     CHECK(*it != *it2);
//     CHECK_FALSE(*it == *it2);

//     ++it;

//     CHECK_FALSE(*it != 17);
        
//     CHECK(*it == 17);
        

//     CHECK(*it ==  *it2);

// }

// TEST_CASE("PrimeIterator > < == !="){
//     MagicalContainer container;
//     container.addElement(18);
//     container.addElement(3);
//     container.addElement(26);
//     container.addElement(10);
//     container.addElement(4);

//     MagicalContainer::PrimeIterator primeIter(container);

//     MagicalContainer container2;
//     container2.addElement(17);
//     container2.addElement(2);
//     container2.addElement(25);
//     container2.addElement(9);
//     container2.addElement(3);

//     MagicalContainer::PrimeIterator primeIter2(container2);
//     CHECK_FALSE((primeIter > primeIter2));
//     CHECK_FALSE((primeIter == primeIter2));
//     CHECK((primeIter != primeIter2));

//     CHECK_FALSE(!(primeIter < primeIter2));
//     CHECK((primeIter < primeIter2));
//     CHECK(!(primeIter > primeIter2));
// }