#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> values){
    int uniqueValue = 0;
    for(int i=0;i<values.size();i++){
        uniqueValue = uniqueValue ^ values[i];
    }
    return uniqueValue;
}

int main(){
    vector<int>values = {1,1,5,4,4};
    int uniqueValue = findUniqueElement(values);
    cout<<"Unique Value : "<<uniqueValue<<endl;
}