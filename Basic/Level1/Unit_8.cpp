#include<iostream>

using namespace std;

char change(char c);

int main()
{
    char c;
    cin>>c;
    char ans = change(c);
    cout<<ans;
    return 0;
}

char change(char c) 
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}