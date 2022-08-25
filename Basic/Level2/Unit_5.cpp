#include<iostream>

using namespace std;

int findMax(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = findMax(a, b, c, d);
    cout<<ans;
    return 0;
}

int findMax(int a, int b, int c, int d)
{
    return max( max(a, b), max(c, d) );
}