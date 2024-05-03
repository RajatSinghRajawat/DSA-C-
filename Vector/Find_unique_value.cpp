
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> narr;
  vector<int> arr;
  int vsize, vvalue;
  cout << "enter vector size ";
  cin >> vsize;

  for (int i = 0; i < vsize; i++)
  {
    cout << "enter vector item ";
    cin >> vvalue;
    arr.push_back(vvalue);
  }

  int value = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr.size(); j++)
    {
      if (0 == (arr[i] ^ arr[j]))
      {
        value++;
      }
    }
    if (value == 1)
    {
      int mvalue = arr[i];
      narr.push_back(mvalue);
    }
    value = 0;
  }

  for (int i = 0; i < narr.size(); i++)
  {
    cout << narr[i] << " value unique " << endl;
  }
}