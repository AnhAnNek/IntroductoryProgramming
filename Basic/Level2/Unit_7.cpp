#include<iostream>
#include<math.h>

using namespace std;

int solve(int a, int b, int c, float &x1, float &x2);
void output(int flag, float x1, float x2);

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    float x1 = 0, x2 = 0;
    int flag = solve(a, b, c, x1, x2);
    output(flag, x1, x2);
    return 0;
}

int solve(int a, int b, int c, float &x1, float &x2)
{
    if (a == 0)
        if (b == 0)
            if (c == 0)
                return 4;
            else
                return 0;
        else
            if (c == 0)
                return 4;
            else
            {
                x1 = 1.0 * -c / b;
                return 1;
            }
    
    float delta = b*b - 4*a*c;
    if (delta < 0)
        return 0;
    else if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        return 3;
    } 
    else
    {
        x1 = 1.0 * -b / (2*a);
        return 2;
    }

}
void output(int flag, float x1, float x2)
{
    if (flag == 0)
        cout<<"No solution";
    else if (flag == 1)
        cout<<"Unique solution x = "<<x1<<endl;
    else if (flag == 2)
        cout<<"Double solution x = "<<x1<<endl;
    else if (flag == 3)
        cout<<"Two distinct solutions x1 = "<<x1<<", x2 = "<<x2<<endl;
    else
        cout<<"Infinitely many solutions";
}