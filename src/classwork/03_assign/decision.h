#include <string>
#include <iostream>

using std::string, std::cout, std::cin, std::endl;

string get_letter_grade_using_if (int grade);

string get_letter_grade_using_switch (int grade);

int get_grade(int grade);

bool test_input(int grade, bool result);

char display_letter_grade(bool result, int grade, char x, string if_grade, string switch_grade);

char get_another_entry(char x);
