#include<iostream>
using namespace std;
int main(){
    int values[5] = {};
    int zeros = 0;
    int ones = 0;

    for(int i=0;i<5;i++){
        cin>>values[i];
    }

    cout<<endl<<""<<endl;

    for(int i=0;i<5;i++){
        if(values[i]==0){
            zeros++;
        }
        if(values[i]==1){
            ones++;
        }
    }

    cout<<"Total Zeros : "<<zeros<<endl;
    cout<<"Total Ones : "<<ones;
}