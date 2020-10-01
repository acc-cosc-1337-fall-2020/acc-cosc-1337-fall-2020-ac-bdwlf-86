#include "decision.h"

string get_letter_grade_using_if (int grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if (grade >= 80 && grade < 90)
    {
        return "B";
    }
    else if (grade >= 70 && grade < 80)
    {
        return "C";
    }
    else if (grade >= 60 && grade <= 70)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

string get_letter_grade_using_switch (int grade)
{
    string letter = "A";
    int num = grade/10;

    switch (num)
    {
        case 10:
            letter = "A";
            break;
        case 9:
            letter = "A";
            break;
        case 8:
            letter = "B";
            break;
        case 7:
            letter = "C";
            break;
        case 6:
            letter = "D";
            break;
        case 5:
            letter = "F";
            break;
        case 4:
            letter = "F";
            break;
        case 3:
            letter = "F";
            break;
        case 2:
            letter = "F";
            break;
        case 1:
            letter = "F";
            break;
        case 0:
            letter = "F";
            break;
        default:
            letter = "Invalid Option";
            break;
    }
    return letter;
}

int get_grade(int grade)
{
    cout << endl;
    cout << "Please enter a grade from 0-100: ";
    cin >> grade;
    return grade;
}

bool test_input(int grade, bool result)
{
    result = grade >= 00 && 100 >= grade;

    return result;
}

char display_letter_grade(bool result, int grade, char x,string if_grade, string switch_grade)
{
    if (result == true)
    {
        cout << endl
             << "Grade : " << if_grade  << endl
             << "Grade : " << switch_grade  << endl
             << endl
             << "Do you want to enter another grade, Y or N? ";
        cin >> x;
        x = toupper(x);

        return x;
    }
    else
    {
        cout << endl
             << "Invalid Grade!!!" << endl
             << endl
             << "Do you want to try again, Y or N? ";
        cin >> x;
        x = toupper(x);

        return x;
    }
}

char get_another_entry(char x)
{
    while (x != 'Y' && x != 'N')
    {
        cout << endl
             << "Invalid option!!! Please enter valid option." << endl
             << "Do you want to try again, Y or N? ";
        cin >> x;
        x = toupper(x);
    }
    return x;
}
