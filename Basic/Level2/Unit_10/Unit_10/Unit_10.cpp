#include <iostream>

using namespace std;

void findTimeThenOneSecond(int h, int m, int s, int& h1, int& m1, int& s1);
void input(int& h, int& m, int& s);
void output(int h, int m, int s);

int main()
{
    int h, m, s, h1, m1, s1;
    input(h, m, s);
    findTimeThenOneSecond(h, m, s, h1, m1, s1);
    output(h1, m1, s1);
    return 0;
}

void findTimeThenOneSecond(int h, int m, int s, int& h1, int& m1, int& s1)
{
    h1 = h;
    m1 = m;
    s1 = s;
    if (s1 < 59)
        s1++;
    else
    {
        s1 = 0;
        if (m1 < 59)
            m1++;
        else
        {
            m1 = 0;
            if (h1 < 23)
                h1++;
            else
            {
                h1 = 0;
            }
        }
    }
}
void input(int& h, int& m, int& s)
{
    cin >> h >> m >> s;
}
void output(int h, int m, int s)
{
    cout << h << ":" << m << ":" << s << endl;
}