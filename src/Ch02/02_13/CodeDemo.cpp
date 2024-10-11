// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    // Write your code here
    int sum = 0;
    // note need to dived by the first element of the array for the size
    // alternatively from the stl there is array.size()
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++ ){
        sum = sum + nums[i];
        std::cout << "The sum is " << sum << std::endl;
    }
    result = sum/5.0;

    // simpler, without the loop or extra variable 'sum'
    // result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    // result /= 5;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
