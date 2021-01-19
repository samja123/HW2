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
    int centsLeft1;
    int centsLeft2;
    int centsLeft3;

    cout<<"Please enter your amount in the ";
    cout<<"format of dollars and cents separated by a space: "<<endl;
    cin>>dollars>>cents;
    cout<<dollars<<" dollars and "<<cents<<" cents are: "<<endl;

    dollars = dollars * CENTS_IN_A_DOLLAR;
    cents = cents + dollars;
    quarters = cents / VALUE_OF_QUARTER;
    centsLeft1 =  cents - (quarters * VALUE_OF_QUARTER);
    dimes = centsLeft1 / VALUE_OF_DIME;
    centsLeft2 = centsLeft1 - (dimes * VALUE_OF_DIME);
    nickels = centsLeft2 / VALUE_OF_NICKEL;
    centsLeft3 = centsLeft2 - (nickels * VALUE_OF_NICKEL);
    pennies = centsLeft3 / VALUE_OF_PENNY;

    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;

    return 0;
}
