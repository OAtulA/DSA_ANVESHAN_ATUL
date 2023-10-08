
#include <iostream>
using namespace std;
int main()
{
     int n1, n2, choice;
     float ans;
     cout << "Enter the options as follows: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division";
     cout << "\nYour Option : ";
     cin >> choice;
     cout << "Enter 1st number :";
     cin >> n1;
     cout << "Enter 2nd number : ";
     cin >> n2;
     switch(choice)
    {
        case 1:
            ans = n1 + n2;
            cout << n1 << " + " << n2 << " = " << ans;
            break;
        case 2:
            ans = n1 - n2;
            cout << n1 << " - " << n2 << " = " << ans;
            break;
        case 3:
            ans = n1 * n2;
            cout << n1 << " * " << n2 << " = " << ans;
            break;
        case 4:
            ans = n1 / n2;
            cout << n1 << " / " << n2 << " = " << ans;
            break;
        default:
            cout << "Please enter the correct input";
            break;
    }
    return 0;
}