//Write the include statement for types.h here
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen

int main() 
{
    //Declare Variables
    int num,
        num1 = 4,
        result;

    //Get User Input
    std::cout << "Please enter a number: ";
    std::cin >> num;

    //Call multiply_numbers function and display results
    result = multiply_numbers(num);
    std::cout << "Result: " << result << "\n";
    result = multiply_numbers(num1);
    std::cout << "Result: " << result;
    return 0;
}

