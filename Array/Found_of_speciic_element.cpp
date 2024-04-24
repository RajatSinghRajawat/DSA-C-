#include<iostream>
using namespace std;

bool isPresent(int values[],int length,int toFind){
    for(int i=0;i<length;i++){
        if(values[i]==toFind){
            return true;
        }
    }
    return false;
}

int main(){
    int values[5] = {};
    int toFind = 0;

    for(int i=0;i<5;i++){
        cin>>values[i];
    }

    cout<<""<<endl;

    cout<<"Enter a number to find"<<endl;
    cin>>toFind;

    cout<<""<<endl;


    int output = isPresent(values,5,toFind);

    if(output==1){
        cout<<endl<<"Found";
    }else{
        cout<<endl<<"Not Found";
    }





}