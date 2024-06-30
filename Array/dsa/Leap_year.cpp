#include <bits/stdc++.h>
using namespace std;

int main(){
    
 
int year;
cout << "Enter a year: ";
cin >> year;

bool isLeap = false;

if (year % 4 == 0) {
   isLeap = true;
}
 else {
        isLeap = true;
    }

if (isLeap) {
    cout << year << " is a leap year." << endl;
} else {
    cout << year << " is not a leap year." << endl;
}
    return 0;
}