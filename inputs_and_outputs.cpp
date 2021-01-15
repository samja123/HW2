#include <iostream>
#include<cmath>
#include<string>
#include <iostream>
using namespace std;


int main() {
    int val1;
    int val2;
    int add_val;
    int minus_val;
    int mult_val;
    double div_val;
    int div_no_remainder_val;
    int remainder_val;

    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>val1>>val2;

    add_val = val1 + val2;
    minus_val = val1 - val2;
    mult_val = val1 * val2;
    div_val = double(val1) / double(val2);
    div_no_remainder_val = val1 / val2;
    remainder_val = val1 % val2;

    /* taken from textbook to make div_val only 2 decimals */
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<val1<<" + "<<val2<<" = "<<add_val<<endl;
    cout<<val1<<" - "<<val2<<" = "<<minus_val<<endl;
    cout<<val1<<" * "<<val2<<" = "<<mult_val<<endl;
    cout<<val1<<" / "<<val2<<" = "<<div_val<<endl;
    cout<<val1<<" / "<<val2<<" = "<<div_no_remainder_val<<endl;
    cout<<val1<<" % "<<val2<<" = "<<remainder_val<<endl;

    return 0;
}