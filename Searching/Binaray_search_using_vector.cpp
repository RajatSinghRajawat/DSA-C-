#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // If target not found
}

int main()
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> vec(size);
    cout << "Enter the elements of the vector in sorted order: ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    int target;
    cout << "Enter the target value to search: ";
    cin >> target;

    int index = binary_search(vec, target);

    if (index == -1)
    {
        cout << "Target value not found.";
    }
    else
    {
        cout << "Target value found at index: " << index << ", value: " << vec[index];
    }

    return 0;
}
