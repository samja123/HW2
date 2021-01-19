#include <iostream>
#include<cmath>
#include<string>
using namespace std;

const int CENTS_IN_A_DOLLAR = 100;
const int VALUE_OF_QUARTER = 25;
const int VALUE_OF_DIME = 10;
const int VALUE_OF_NICKEL = 5;
const int VALUE_OF_PENNY = 1;
int main() {
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int dollars;
    int cents;

    cout<<"Please enter number of coins: "<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    quarters = quarters * VALUE_OF_QUARTER;
    dimes = dimes * VALUE_OF_DIME;
    nickels = nickels * VALUE_OF_NICKEL;
    pennies = pennies * VALUE_OF_PENNY;

    dollars = (quarters + dimes + nickels + pennies) / CENTS_IN_A_DOLLAR;
    cents = (quarters + dimes + nickels + pennies) % CENTS_IN_A_DOLLAR;

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents";

    return 0;
}
