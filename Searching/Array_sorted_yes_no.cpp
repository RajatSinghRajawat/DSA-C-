#include <bits/stdc++.h>
using namespace std;

int main(){
    string Sort;
    vector<int>values ={1,2,4,3,5,6,7};
    for(int i=0; i<values.size(); i++){
        if(values[i]<values[i+1]){
            Sort = "the will be sorted";

        }else{
            Sort = "not be sorted";
            break;
        }
    }
    for(int i=0; i<values.size(); i++){
        cout<<values[i]<<endl;
    }
    cout<<"The will be "<<Sort<<endl;
}