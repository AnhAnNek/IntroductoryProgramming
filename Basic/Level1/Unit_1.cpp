#include<iostream>

using namespace std;

int add(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = add(a, b);
    cout << sum;
    return 0;
}

int add(int a, int b) 
{
    return a + b;
}