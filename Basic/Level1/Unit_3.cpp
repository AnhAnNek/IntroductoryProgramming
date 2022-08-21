#include<iostream>

using namespace std;

double findPOfRectangle(double height, double weight);

int main()
{
    double height, weight;
    cin>>height>>weight;
    double p = findPOfRectangle(height, weight);
    cout<<p;
    return 0;
}

double findPOfRectangle(double height, double weight) 
{
    return (height + weight) * 2;
}