#include<iostream>

using namespace std;

bool isValid(int h, int m, int s);
void input(int &h, int &m, int &s);
void output(int ans);

int main()
{
    int h, m, s;
    input(h, m, s);
    bool flag = isValid(h, m, s);
    if (flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
bool isValid(int h, int m, int s)
{
    return (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60);
}
void input(int &h, int &m, int &s)
{
    cin>>h>>m>>s;
}
void output(int ans) 
{
    cout<<ans;
}