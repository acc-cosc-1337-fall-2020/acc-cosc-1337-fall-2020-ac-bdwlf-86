#include "variables.h"
#include <cmath>

using std::round;

double get_sales_tax_amount(double meal_amount)
{
    const double tax_rate = .0675;

    return tax_rate * meal_amount;

}

double get_tip_amount(double meal_amount, double tip_rate)
{
    return meal_amount * tip_rate;
}

double round_to_cents(double num)
{
    double x = num * 100;
    double y = round(x) / 100;
    return y;
}

