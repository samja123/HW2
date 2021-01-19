#include <iostream>
#include<cmath>
#include<string>
using namespace std;

const int MINUTES_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;
int main() {
    int days_John_worked, hours_John_worked, minutes_John_worked;
    int days_Bill_worked, hours_Bill_worked, minutes_Bill_worked;
    int total_days, total_hours, total_minutes;
    int carry_over_hours, carry_over_days;
    int print_minutes, print_hours;

    cout<<"Please enter the number of days John has worked: "<<endl;
    cin>>days_John_worked;
    cout<<"Please enter the number of hours John has worked: "<<endl;
    cin>>hours_John_worked;
    cout<<"Please enter the number of minutes John has worked: "<<endl;
    cin>>minutes_John_worked;
    cout<<" "<<endl;
    cout<<"Please enter the number of days Bill has worked: "<<endl;
    cin>>days_Bill_worked;
    cout<<"Please enter the number of hours Bill has worked: "<<endl;
    cin>>hours_Bill_worked;
    cout<<"Please enter the number of minutes Bill has worked: "<<endl;
    cin>>minutes_Bill_worked;

    total_minutes = minutes_Bill_worked + minutes_John_worked;
    carry_over_hours = total_minutes / MINUTES_IN_HOUR;
    print_minutes = total_minutes - (carry_over_hours * MINUTES_IN_HOUR);

    total_hours = hours_Bill_worked + hours_John_worked + carry_over_hours;
    carry_over_days = total_hours / HOURS_IN_DAY;
    print_hours = total_hours - (carry_over_days * HOURS_IN_DAY);

    total_days = days_Bill_worked + days_John_worked + carry_over_days;

    cout<<"The total time both of them worked together is: "<<total_days<<" days, "<<print_hours<<" hours and "<<print_minutes<<" minutes."<<endl;

    return 0;
}