// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum cow_purpose {dairy, meat, hide, pet};
// duplication of enum names with different values, will cause errors
//enum grocery_section {canned, frozen, meat, laundry, dairy, bakery};

// fix is to use the enum class, these are strongly typed
enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    // demo to show confusion with the global scope C style enum
    //int meat = 8:
    int a;

    // a = meat;
    // using the enum class
    a = (int) cow_purpose::meat

    //alternative and more appropriate
    cow_purpose b;
    b = cow_purpose::meat;

    std::cout << "a = " << a << std::endl;
    // here we need to cast b to int as the 
    std::cout << "b = " << (int) b << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
