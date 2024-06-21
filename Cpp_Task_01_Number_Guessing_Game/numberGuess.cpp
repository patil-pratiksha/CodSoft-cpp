
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number;
    int guess = 0;

    srand(time(NULL));

    number = rand() % 50 + 1;

    do
    {
        cout << "\n\t\tGuess the number between 1 to 50: ";
        cin >> guess;

        if (guess > number)
        {
            cout << "\n\t\tThink of a smaller number.";
        }
        else if (guess < number)
        {
            cout << "\n\t\tThink of a larger number.";
        }
        else
        {
            cout << "\n\t\tYou Won!!!";
        }

    } while (guess != number);

    return 0;
}
