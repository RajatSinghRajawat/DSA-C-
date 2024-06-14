#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12};
    int val;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] != arr[i + 1] && arr[i] + 1 != arr[i + 1])
        {
            val = arr[i] + 1;
            break;
        }
    }
    cout << val << endl;
}

//  vector<int> arr = {1, 2,3,5,6};
//     int val ;
//     sort(arr.begin(), arr.end());
//         for(int i=1; i<=6;i++){
//             if(i!=arr[i-1]){
//                 val = i;
//                 break;
//         }
// }
//         cout<<val;
