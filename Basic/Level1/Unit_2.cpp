#include<iostream>

using namespace std;

int abs(int n);

int main()
{
    int n;
    cin>>n;
    int ans = abs(n);
    cout<<ans;
    return 0;
}

int abs(int n) 
{
    return (n >= 0) ? n : -n;
}