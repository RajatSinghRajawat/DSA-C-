#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
/**
 * start = 0;
 * mid = 3;
 * end = 5;
 * 

*/

// 1,2,3,4,5,6



        }else if(arr[mid]<target){  
            start = mid+1;
        }else{
              end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 65;

    int indexValue = binarySearch(arr,size,target);

    if(indexValue==-1){
        cout<<"value not found"<<endl;
    }else{
        cout<<"value found at"<<indexValue<<" index"<<arr[indexValue]<<endl;
    }
}