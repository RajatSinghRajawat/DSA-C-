#include <iostream>
#include <vector>
using namespace std;

int compare(vector<int> arr, vector<int> arr2)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                cout << "METCH " << arr[i] << endl;
            }
        }
    }
}
 
int Return(   vector<int> arr= {1, 2, 3, 4, 5},
    vector<int> arr2 = {1, 2}){
      return compare(arr, arr2);


}

int main()
{
    // vector <int> arr = {1, 2, 3, 4, 5};
    // vector <int> arr2 = {1, 5};
    int compare_array = Return();
    cout<<"compare_array "<<compare_array<<endl;
    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr2 = {3, 5};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr2.size(); j++)
    //     {
    //         if (arr[i] == arr2[j])
    //         {
    //             cout << "METCH " << arr[i] << endl;
    //         }
    //     }
    // }
}
