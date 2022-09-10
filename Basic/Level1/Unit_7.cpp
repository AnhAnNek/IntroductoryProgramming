#include<iostream>

using namespace std;

bool isTriangle(double a, double b, double c);

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    bool flag = isTriangle(a, b, c);
    if (flag)
        cout<<"YES";
    else    
        cout<<"NO";
    return 0;
}
bool isTriangle(double a, double b, double c)
{
    return (a > 0 && b > 0 && c > 0 && 
            a + b > c && a + c > b && b + c > a);
}