/******************************************************************************
                           Decimal to hexadecimal Converter
                           Dominick Ferro
                           Assembly Language
 		                       Written in C++
*******************************************************************************/
#include <iostream>
using namespace std;
 
int main()
{
    int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    cout << "\n\n Decimal #number to hexadecimal number calculator:\n";
    cout << "---------------------------------------------------\n";
    cout << " Please type a decimal #number: ";
    cin >> dec_num;

    while(dec_num>0)
    {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec_num = dec_num/16;
    }
    cout << " The hexadecimal conversion is : " << hexdec_num << "\n"; 
}
