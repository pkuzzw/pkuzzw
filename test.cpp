#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    cout << endl;
    cout << "Hello,World" << endl;
    auto list = {9, 6, 2, 7, 8, 3, 1, 5, 0, 4};
    vector<int> v(list);
    sort(v.begin(), v.end());
    for (int num : v)
    {
        cout << num << endl;
    }
    unordered_map<int, std::string> hashmap={
        {2,"two boba pearls"},
        {3, "three peanuts"},
        {4, "four rasisins"},
        {1, "a bizarre spoon"}
      };

      std::cout<<"--------------------------------"<<endl;
      for(auto&&[key,val] : hashmap)
      {
        cout << key << ":" << val << endl;
      }

    return 0;
}