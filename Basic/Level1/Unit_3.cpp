#include<iostream>

using namespace std;

double getPerimeter(double height, double weight);

int main()
{
    double height, weight;
    cin>>height>>weight;
    double perimeter = getPerimeter(height, weight);
    cout<<perimeter;
    return 0;
}

double getPerimeter(double height, double weight) 
{
    return (height + weight) * 2;
}