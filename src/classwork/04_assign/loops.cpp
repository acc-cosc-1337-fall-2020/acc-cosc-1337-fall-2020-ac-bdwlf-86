#include "loops.h"


int factorial(int num)
{
    long long prod = 1;

    for (int i = 1; i <= num; ++i)
    {
        prod = prod * i;
    }

    cout << "Number selected: " << num << endl;

    return prod;
}

int menu()
{
    int num = 0;

    do
    {
        cout << "Please enter a number between 1 and 10: ";
        cin >> num;
        
    } while (num < 1 || num >10);

    return num;
}

void display_factorial(int num)
{
    cout << "The factorial is " << num << endl;
}