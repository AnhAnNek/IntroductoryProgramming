#include<iostream>

using namespace std;

int findMax(int a, int b);

int main()
{
    int a, b;
    cin>>a>>b;
    int res = findMax(a, b);
    cout<<res;
    return 0;
}

int findMax(int a, int b) 
{
    if (a > b)
        return a;
    else    
        return b;
}