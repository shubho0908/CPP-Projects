//This is a very rough & simple model of an ATM. I just practiced my concepts on this & tried to add 2-3 features of an actual ATM machine. There must be alot of mistakes that I've made in this code. It'd be appreciatable if you figure out & share your knowledge.
//Will update it more perfectly later, there are more fun features to add right now in this project.

#include <iostream>
using namespace std;

int enterance()
{
    // Here I'll be using 3 account numbers to make the program simple and not so complicated.
    // 3964433256, PIN = 4485
    // 3964358842, PIN = 1488
    // 3964354721, PIN = 5664

    long long int ac;
    cout << "Enter you A/C number : ";
    cin >> ac;
    if (ac == 3964433256)
    {
        cout << "Welcome to SBI, " << endl;
    }
    else if (ac == 3964358842)
    {
        cout << "Welcome to SBI, " << endl;
    }
    else if (ac == 3964354721)
    {
        cout << "Welcome to SBI, " << endl;
    }
    else
    {
        cout << "Your account doesn't belongs to our Bank." << endl;
        abort;
    }
    if (ac == 3964433256)
    {
        return 1;
    }
    else if (ac == 3964358842)
    {
        return 1;
    }
    else if (ac == 3964354721)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int pin()
{
    int pin;

    int attempt = 3;
    long long int money1 = 500;
    long long int money2 = 6255;
    long long int money3 = 14565;
    do
    {
        cout
            << "Please enter your 4-digit ATM pin : ";
        cin >> pin;
        if (pin == 4485)
        {
            cout << "Your available balance is Rs." << money1 << endl;
            return 1;
            abort;
        }
        else if (pin == 1488)
        {
            cout << "Your available balance is Rs." << money2 << endl;
            return 1;
            abort;
        }
        else if (pin == 5664)
        {
            cout << "Your available balance is Rs." << money3 << endl;
            return 1;
            abort;
        }
        else
        {
            cout << "Incorrect PIN, " << attempt << " attempts left." << endl;
            // return 0;
        }

        attempt--;
        if (attempt < 0)
        {
            cout << "Your ATM card is blocked because you entered wrong pin multiple times." << endl;
        }

    } while (attempt >= 0);
}

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    cout << "------------------" << endl;
    cout << "------------------" << endl;
    cout << "------------------" << endl;
    // cout << endl;
    int func1 = enterance();
    if (func1 == 0)
    {
        abort;
    }
    else if (func1 == 1)
    {
        cout << "Success!" << endl;
        // pin
        cout << "------------------" << endl;
        cout << "------------------" << endl;
        cout << "------------------" << endl;
        int func2 = pin();
        if (func2 == 1)
        {
            abort;
            cout << "Thank You!" << endl;
            cout << "Please visit again! " << name << endl;
        }
    }

    return 0;
}
