#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> values = {1, 2, 1, 0, 2, 2, 1, 0};
    int n = values.size();

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] == 0)
            count0++;
        else if (values[i] == 1)
            count1++;
        else
            count2++;
    }
    cout<<" values of zeros"<<count0<<endl;
    cout<<" values of ones"<<count1<<endl;
    cout<<" values of two"<<count2<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (values[j] < values[i])
            {
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }
}