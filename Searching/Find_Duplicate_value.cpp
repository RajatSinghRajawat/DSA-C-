// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> value = {1, 2, 2, 3, 6, 4, 4,2};
//     vector<int> duplicates;

//     sort(value.begin(), value.end());
//     for (int i = 0; i < value.size() - 1; i++)
//     {
//         if (value[i] == value[i + 1])
//         {
//             duplicates.push_back(value[i]);
//         }
//     }
//     for (int i = 0; i < value.size(); i++)
//     {
//         cout << value[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < duplicates.size(); i++)
//     {
//         cout << duplicates[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 3};
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i];
                break;
            }
        }
    }

    return 0;
}