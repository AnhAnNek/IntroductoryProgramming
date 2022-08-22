#include<iostream>

using namespace std;

bool isLeapYear(int year);

int main()
{
    int year;
    cin>>year;
    bool flag = isLeapYear(year);
    if (flag)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}

bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}