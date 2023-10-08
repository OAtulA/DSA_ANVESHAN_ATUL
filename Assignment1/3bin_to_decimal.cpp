#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long binaryNum, decimalNum = 0, j = 1, remainder;
	cout << "\n\n Convert a  binary number to decimal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNum;
    while (binaryNum != 0) 
    {
   remainder = binaryNum % 10;
   decimalNum = decimalNum + remainder * j;
   j = j * 2;
   binaryNum = binaryNum / 10;
  }
  cout<<" The decimal number: " << decimalNum<<"\n";
} 
