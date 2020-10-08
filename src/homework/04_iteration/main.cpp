//write include statements
#include "dna.h"
//write using statements

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setprecision;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
    bool test = true;
    char choice ='Y';
    int x;
    string dna;

    while (test)
    {
        x = display_menu();

        while(1 <= x && x <= 3)
        {
            switch (x)
            {
                case 1:
                    cout << "Enter DNA chain: ";
                    cin >> dna;
                    for(int i=0;i < dna.size();i++)
                    {
                        dna[i] = toupper(dna[i]);
                    }
                    cout << setprecision(4);
                    cout << "The GC content is " << get_gc_content(dna) << endl;
                    break;
                case 2:
                    cout << "Enter DNA chain: ";
                    cin >> dna;
                    for(int i=0;i < dna.size();i++)
                    {
                        dna[i] = toupper(dna[i]);
                    }
                    cout << "The DNA Complement is :" << get_dna_complement(dna) << endl;
                    break;
                case 3:
                    x=4;
                    break;
                default:
                    cout << "Not A Valid Option!";
                    break;
            }

            if (x == 1 || x == 2) {
                cout << "Continue: Y or N?" << endl;
                cin >> choice;
                choice = toupper(choice);
                x = choice == 'Y' ? display_menu() : 3;
            }
            test = false;
        }
    }
	return 0;
}