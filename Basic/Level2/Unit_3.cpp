#include<iostream>

using namespace std;

int findMin(int a, int b, int c);

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int ans = findMin(a, b, c);
    cout<<ans;
    return 0;
}

int findMin(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    if (b < a && b < c)
        return b;
    return c;
}