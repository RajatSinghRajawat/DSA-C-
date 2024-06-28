#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array";
    cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number array" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i] * 2;
        
    }
    for (int i = 0; i < n; i++)
    {
      
        cout<<endl << arr[i] << endl;
    }
}
