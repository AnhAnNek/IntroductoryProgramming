#include<iostream>

using namespace std;

int solve(double a, double b, double &ans);
void output(string str_);
void output(double ans);

int main()
{
    double a, b;
    cin>>a>>b;
    double ans;
    int flag = solve(a, b, ans);
    if (flag == -1)
        output("No Solution");
    else if (flag == 0)
        output("Infinity");
    else
        output(ans);
    return 0;
}

int solve(double a, double b, double &ans)
{
    if (a == 0.0)
        if (b == 0.0)
            return 0;
        else
            return -1;
    else
        if (b == 0.0)
            return 0;
        else
        {
            ans = -b / a;
            return 1;
        }
}
void output(string str_)
{
    cout<<str_<<endl;
}
void output(double ans)
{
    cout<<ans<<endl;
}