#include<iostream>
#include<limits.h>
using namespace std;

int maxInArray(int arr[], int size, int index, int &maxi){
    if(index == size){
        return 0;
    }
    maxi = max(maxi,arr[index]);
    maxInArray(arr, size, index+1, maxi);
    return maxi;
}

int minInArray(int* arr, int size, int index, int &mini){
    if(index == size){
        return 0;
    }
    mini = min(mini, arr[index]);
    minInArray(arr, size, index + 1, mini);
    return mini;
}

int main(){
    int arr[] = {100,34,56,23,1102,45,233};
    int size = 7;
    int index = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    // int ans = minInArray(arr, size, index, mini);
    int ans = maxInArray(arr, size, index, maxi);
    cout<<"Ans = "<<ans;
}