#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    vector<int>arr ={1,2,3,4,5};
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout<<"The average value of arrays is "<<sum/arr.size()<<endl;
}