#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; 
    int targetSum;
    cin>>targetSum;
    cout << "Enter the value of n:" << '\n';
    cin >> n;
    vector<int> pairSum(n);
    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> pairSum[i];
    }
    for (int i = 0; i < pairSum.size(); i++)
    {
        for (int j = i + 1; j < pairSum.size(); j++)
        {
            if (pairSum[i] + pairSum[j] == targetSum)
            {
                cout << pairSum[i] << " " << pairSum[j] << endl;
                cout << "the index is :"<<i << " and " << j<<endl;
            }
        }
    }
}
