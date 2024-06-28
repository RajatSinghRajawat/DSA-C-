#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number";
    cin >> n;

    int values[n] = {};

    for (int i = 0; i <= n; i++)
    {
        cin >> values[i];
    }
    for (int i = 0; i < n; i++)
    {
        values[i] =1;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<values[i];

    }
}