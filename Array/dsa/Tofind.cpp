#include <bits/stdc++.h>
using namespace std;
bool isPersent(int arr , int n , int tofind){
    for(int i = 0; i < n; i++){
        if(arr[i] == tofind){
            return true;
        }
    }
    return false;

}
int main(){
    

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int tofind = 0;

    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }   
    cout << "Enter the number to find: ";
    cin >> tofind;
    bool output = isPersent(arr, n, tofind);

    if(output == 1){
        cout << tofind << " is present in the array." << endl;
    }
    else{
        cout << tofind << " is not present in the array." << endl;
    }
    return 0;
 
}