#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {5, 8, 2, 9, 3};
    int b[] = {2, 4, 8, 0};
    vector<int> nums;
    for (int i = 0; i < 5; i++)
    {
        nums.push_back(a[i]);
    }
    for (int i = 0; i < 5; i++){
      for (int j = 0; j < 4; j++)
        {
            if(a[i]==b[j]){
                b[j]=INT16_MIN;
            }   
        }

    }
    for (int i = 0; i < 4; i++){
        if(b[i] != INT16_MIN){
            nums.push_back(b[i]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}