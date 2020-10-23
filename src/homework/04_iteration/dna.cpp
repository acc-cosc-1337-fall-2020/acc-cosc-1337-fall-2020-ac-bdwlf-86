#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna)
{
    double x = 0;

    for(auto i: dna)
    {
        if(i == 'C' || i == 'G')
        {
            x++;
        }
    }
    return  (x/dna.size())*100;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
    int n=0;
    int i = dna.size()-1;
    std::string new_dna(dna.size(),' ');

    for(int y=0; y < dna.size(); y++)
    {
        new_dna[n] = dna[i];
        n++;
        i--;
    }

    return  new_dna;

}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
    std::string reverse = get_reverse_string(dna);

    for(int y=0; y < reverse.size(); y++)
    {
        if(reverse[y] == 'A')
        {
            reverse[y] = 'T';
        }
        else if(reverse[y] == 'T')
        {
            reverse[y] = 'A';
        }
        else if(reverse[y] == 'G')
        {
            reverse[y] = 'C';
        }
        else
        {
            reverse[y] = 'G';
        }
    }
    return reverse;
}

int display_menu()
{
    int x=0;

    std::cout << "DNA Testing" << std::endl;
    std::cout << "---Option 1: Get GC Content" << std::endl;
    std::cout << "---Option 2: Get DNA Complement" << std::endl;
    std::cout << "---Option 3: End Program" << std::endl;
    std::cout << "Option: ";
    std::cin >> x;

    return x;
}
