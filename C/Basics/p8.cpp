// Given days to years , weeks and days

#include <iostream>
using namespace::std;

int main() {
    int days;
    int temp;
    int resYears , resWeeks , resDays;
    int year = 365 , week = 7 , day = 1;

    cout << "Enter days to convert : ";
    cin >> days;

    temp = days;

    resYears = days / year;
    if(resYears > 0) days -= resYears * year;

    resWeeks = days / week;
    if(resWeeks > 0) days -= resWeeks * week; 

    cout << temp << " days : " << resYears << " years , " << resWeeks << " weeks , " << days << " days";

    return 0;
}