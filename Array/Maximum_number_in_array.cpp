#include <iostream>
using namespace std;

int main()
{
    // method one
    int a[5] = { 0, 1, 2, 3, 4};
    int max_num = a[0];
    for(int i = 1; i < 5; i++){
        if(a[i] > max_num){
            max_num = a[i];
        }
    }
    cout << max_num << endl;

    // method two

    // int a[5] = { 0, 1, 2, 3, 4};
    // int max_num = -1;
    // for(int i = 1; i < 5; i++){
    //     if(a[i] > max_num){
    //         max_num = a[i];
    //     }
    // }
    // cout<<"mac"<<max_num;

    // find minimum number in our array
    // int a[5] = { 0, 1, 2, 3, 4};
    // int min_num = +1;
    // for(int i = 1; i < 5; i++){
    //     if(a[i] > max_num){
    //         max_num = a[i];
    //     }
    // }
    // cout<<"mac"<<max_num;
}
