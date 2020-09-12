#include "variables.h"
#include <iostream>
#include <iomanip>

using std::cout, std::cin, std::setprecision, std::fixed;

int main()
{
    //Declare variables for meal and tip
	double meal_amount,
	    tip_amount,
	    tip_rate,
	    tax_amount,
	    total;

	//Get user input for meal
	cout << "Enter meal mount:";
	cin >> meal_amount;

	//Call get_sales_tax_amount function
	tax_amount = get_sales_tax_amount(meal_amount);

	//Get user input for tip rate
	cout << "Enter tip rate:";
	cin >> tip_rate;

	//Call get_tip_amount function
    tip_amount = get_tip_amount(meal_amount,tip_rate);

    total = tip_amount + tax_amount + meal_amount;

    cout << fixed << setprecision(2)
        << "Your receipt: \n"
        << "Meal Amount:\t" << meal_amount << "\n"
        << "Sales tax:\t" << tax_amount <<"\n"
        << "Tip Amount:\t" << tip_amount << "\n"
        << "Total:\t\t" << total;

	return 0;
}