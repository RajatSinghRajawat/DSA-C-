#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> value = {1, 2, 2, 3, 6, 4, 4,2};
    vector<int> duplicates;

    sort(value.begin(), value.end());
    for (int i = 0; i < value.size() - 1; i++)
    {
        if (value[i] == value[i + 1])
        {
            duplicates.push_back(value[i]);
        }
    }
    for (int i = 0; i < value.size(); i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < duplicates.size(); i++)
    {
        cout << duplicates[i] << " ";
    }
    cout << endl;
    return 0;
}