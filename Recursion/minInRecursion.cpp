#include<iostream>
#include<limits.h>
using namespace std;
int minInArray(int* arr, int size, int index, int &mini){
    if(index == size){
        return 0;
    }
    mini = min(mini, arr[index]);
    minInArray(arr, size, index + 1, mini);
    return mini;
}
int main(){
    int arr[] = {100,34,56,23,12,45,233};
    int size = 7;
    int index = 0;
    int mini = INT_MAX;
    int ans = minInArray(arr, size, index, mini);
    cout<<"Ans = "<<ans;
}