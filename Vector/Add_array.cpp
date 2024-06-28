


#include <iostream>
#include <vector>
    using namespace std;
    int main()
    {

        int vector1, vector2;
        cout << "enter the length of vector1 : ";
        cin >> vector1;
        cout << "enter the length of vector2 : ";
        cin >> vector2;

        vector<int> value1(vector1);
        vector<int> value2(vector2);
        vector<int> mergedVector;

        cout << endl
             << "************** enter the values of first vector ******************" << endl;

        for (int i = 0; i < value1.size(); i++)
        {
            cin >> value1[i];
            mergedVector.push_back(value1[i]);
        }

        cout << endl
             << "************** enter the values of second vector ******************" << endl;

        for (int i = 0; i < value2.size(); i++)
        {
            cin >> value2[i];
            mergedVector.push_back(value2[i]);
        }

        cout << endl
             << "************** merged values ******************" << endl;

        for (int i = 0; i < mergedVector.size(); i++)
        {
            cout << mergedVector[i] << " ";
        }
    
    // vector<int>value(5,21);
    // for(int i = 0; i < value.size(); i++){
    //     cout << value[i] << endl;
    // }
}

 