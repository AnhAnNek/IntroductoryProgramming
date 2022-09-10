#include <iostream>

using namespace std;

int findSecondMax(int a, int b, int c);
int sum(int a, int b, int c);
int findMax(int a, int b, int c);
int findMin(int a, int b, int c);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int secondMax = findSecondMax(a, b, c);
    cout << secondMax;
    return 0;
}
int findSecondMax(int a, int b, int c)
{
    return sum(a, b, c) - findMax(a, b, c) - findMin(a, b, c);
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int findMax(int a, int b, int c)
{
    return max(a, max(b, c));
}
int findMin(int a, int b, int c)
{
    return min(a, min(b, c));
}