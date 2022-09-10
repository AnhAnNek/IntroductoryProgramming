#include<iostream>

using namespace std;

int makeRound(double n);

int main()
{
    double n;
    cin>>n;
    int ans = makeRound(n);
    cout<<ans;
    return 0;
}

int makeRound(double n)
{
    int integer = (int) n;
    double real = n - integer;
    if (real >= 0.5)
        return integer + 1;
    else
        return integer;
}