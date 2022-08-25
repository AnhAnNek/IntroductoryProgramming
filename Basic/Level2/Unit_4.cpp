#include<iostream>

using namespace std;

int getDayOf(int m, int y);
bool isLeapYear(int y);

int main()
{
    int m, y;
    cin>>m>>y;
    int d = getDayOf(m, y);
    cout<<d;
    return 0;
}

int getDayOf(int m, int y)
{
    if (m == 2)
        if (isLeapYear(y))
            return 29;
        else
            return 28;
    else
        if (m == 4 || m == 6 || m == 9 || m == 11)
            return 30;
        else
            return 31;
}

bool isLeapYear(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}