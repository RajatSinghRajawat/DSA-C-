#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>values = {23,1,5,87,6};
    sort(values.begin(),values.end());
    for(auto value:values){
        cout<<value<<" ";
    }
}