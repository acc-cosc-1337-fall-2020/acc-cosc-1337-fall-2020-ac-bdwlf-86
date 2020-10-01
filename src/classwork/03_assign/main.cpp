#include "decision.h"

int main()
{
    int grade = 0;
    bool result = false;
    char x = 'Y';
    string if_grade,
            switch_grade;

    while (x == 'Y')
    {
        grade = get_grade(grade);
        result = test_input(grade, result);

        if(result == true)
        {
            if_grade = get_letter_grade_using_if (grade);
            switch_grade = get_letter_grade_using_switch (grade);
        }

        x = get_another_entry(display_letter_grade(result, grade, x, if_grade,switch_grade));
    }

    return 0;
}

