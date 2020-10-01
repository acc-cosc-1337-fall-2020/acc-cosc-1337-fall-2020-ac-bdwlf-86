#include"loops.h"

int main() 
{
    bool choice = true;
    char option;

    while (choice == true)
    {
        display_factorial(factorial(menu()));

        cout << endl;
        cout << "Do you want to find another factorial?" << endl;
        cout << "Enter Y or N: ";
        cin >> option;

        option = toupper(option);

        while (option != 'Y' && option != 'N')
        {
            cout << endl;
            cout << "Please Enter Y or N: " << endl;
            cout << "Do you want to find another factorial? " << endl;
            cin >> option;

            option = toupper(option);
        }

        if (option == 'N')
        {
            choice = false;
        }
    }
	return 0;

}
