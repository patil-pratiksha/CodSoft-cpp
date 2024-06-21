/* Develop a calculator program that perform basic arithmetic operation such as addition, subtraction ,
multiplication and division .allow the user to  input two numbers and choose an operation to perform 
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float a, b;
    cout << "\n\t\t Enter two numbers : ";
    cin >> a >> b;

    cout <<"\n\t\t 1: Addition ";
    cout <<"\n\t\t 1: Subtraction";
    cout <<"\n\t\t 1: Multiplication ";
    cout <<"\n\t\t 1: Division";

    cout << "\n\t\t Enter a choice :";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "\n\t\tADDITION IS : "<< a + b;
        break;
    case 2:
        cout << "\n\t\tSUBTRACTION IS : "<<a - b;
        break;
    case 3:
        cout << "\n\t\tMULTIPLICATION IS : "<<a * b;
        break;
    case 4:
        cout << "\n\t\tDIVISION IS : "<< a / b;
        break;
    default:
        cout << "\n\t\tINVALID CHOICE ";
    }
    return 0;
}
