#include <iostream>

using namespace std;

void pronounce(int n);

int main()
{
    int n;
    cin >> n;
    pronounce(n);
    return 0;
}

void pronounce(int n)
{
    switch(n)
    {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        default:
            cout << "don't know how to pronounce";
    }
    cout << endl;
}