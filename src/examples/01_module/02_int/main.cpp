#include "vars.h"
#include <iostream>

int main() 
{
    int num = sum_numbers (5,6);

    std::cout << "Your number is " << num;

    num = 0;
    std::cout << "\nTesting number, " << num;
    
	return 0;
}