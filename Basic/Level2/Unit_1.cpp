#include<iostream>

using namespace std;

bool divide(int a, int b, float &ans);
void output(double ans);
void output(string str_);

int main()
{
    int a, b;
    cin>>a>>b;
    float ans;
    bool flag = divide(a, b, ans);
    if (flag == false)
        output("Error");
    else
        output(ans);
    return 0;
}

bool divide(int a, int b, float &ans)
{
    if (b == 0)
        return false;
    else 
    {
        ans = 1.0 * a / b;
        return true;
    }
}
void output(double ans)
{
    cout<<ans<<endl;
}
void output(string str_) 
{
    cout<<str_<<endl;
}