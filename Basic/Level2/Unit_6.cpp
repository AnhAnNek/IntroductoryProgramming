#include<iostream>

using namespace std;

int checkTriangleType(double a, double b, double c);
bool isTriangle(double a, double b, double c);
void output(int flag);

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    int flag = checkTriangleType(a, b, c);
    output(flag);
    return 0;
}

int checkTriangleType(double a, double b, double c)
{
    if (!isTriangle(a, b, c))
        return 0;
    
    if (a == b && b == c)
        return 1;
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        if (a == b || b == c || a == c)
            return 2;
        else 
            return 3;
    }
    else if (a == b || b == c || a == c)
        return 4;
    else
        return 5;
}
bool isTriangle(double a, double b, double c)
{
    return (a > 0 && b > 0 && c > 0 &&
            a + b > c && a + c > b && b + c > a);
}
void output(int flag)
{
    if (flag == 0)
        cout<<"Not a triangle";
    else if (flag == 1)
        cout<<"Equilateral triangle";
    else if (flag == 2)
        cout<<"Triangle right angle";
    else if (flag == 3)
        cout<<"Right triangle";
    else if (flag == 4)
        cout<<"Isosceles triangle";
    else 
        cout<<"Normal triangle";
}