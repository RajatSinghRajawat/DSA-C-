#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter length of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter array elements";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
        
    }
    for (int i=n-1; i>=0; i--){
        cout << arr[i];
    }

    }
    
