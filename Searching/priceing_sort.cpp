#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1000, 2000, 345, 400, 200, 150, 500, 800, 1200, 900};
    int n = arr.size();
    int select;
    cout << "Enter 0 for ascending or 1 for descending sort: ";
    cin >> select;

    if (select == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else if (select == 1)
    {

        for (int i = 0; i <n; i++)
        {
            for (int j = i + 1; j <n; j++)
            {
                if (arr[j] > arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}