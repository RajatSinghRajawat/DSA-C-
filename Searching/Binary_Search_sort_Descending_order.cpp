#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &values, int target)
{
    int start = 0;
    int end = values.size() - 1;
    int mid = start + end / 2;

    while (start <= end)
    {

        if (values[mid] == target)
        {
            return mid;
        }
        else if (values[mid] > target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
     mid = start + end / 2;

    return -1;
}
int main()
{

    int size;
    cout << "enter your size : ";
    cin >> size;
    vector<int> values(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements of the vector in sorted order: ";
        cin >> values[i];
    }
    sort(values.rbegin(), values.rend());

    for (int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    int index = binary_search(values, target);

    if (index == -1)
    {
        cout << "Target value not found.";
    }
    else
    {
        cout << "Target value found at index: " << index << ", value: " << values[index];
    }

    return 0;
}