// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "            The content of a is " << a << std::endl;
    std::cout << "          ptr points to address " << ptr << std::endl;
    std::cout << "             The addres of a is " << &a << std::endl;
    std::cout << " Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "           The addres of ptr is " << &ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
