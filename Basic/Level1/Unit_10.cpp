#include<iostream>

using namespace std;

int findLargestNumberThatIsLessThanA(double a);

int main()
{
    double a;
    cin>>a;
    int ans = findLargestNumberThatIsLessThanA(a);
    cout<<ans;
    return 0;
}

int findLargestNumberThatIsLessThanA(double a)
{
    int integer = (int) a;
    double real = a - integer;
    if (real == 0)
        return integer - 1;
    else
        return integer;
}