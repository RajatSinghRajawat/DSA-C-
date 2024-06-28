#include<iostream>
using namespace std;

int main(){
    int arr[] = {143,23,452,76,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int index = i;
        // cout<<arr[i]<<" i"<<endl;
        for(int j=i+1;j<size;j++){
        // cout<<arr[j]<<" j"<<endl;
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}l