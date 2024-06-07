#include<iostream>
#include<limits>
using namespace std;
                                               // Maximum number is:
int getmax(int nums[][3], int m, int n){
    int maxi = INT16_MIN;
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++){
            if(maxi < nums[i][j]){
                maxi = nums[i][j];
            }
        }
    }
    cout<<"The Maximum number is : "<<maxi<<endl;
}
                                                // Minimum number is:
int getmin(int nums[][3], int m, int n){
    int mini = INT16_MAX;
    for(int i=0;i<m;i++){
        for (int j = 0; j < n; j++){
            if(mini > nums[i][j]){
                mini = nums[i][j];
            }
        }
    }
    cout<<"The Minimum number is : "<<mini;
}
                                                // Printing the array
int printarray(int arr[][3],int row, int col){
    cout<<"Enter the elements of Arrays :\n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    getmax(arr,3,3);
    getmin(arr, 3,3);
}
int main(){
    int arr[3][3];
    int nums[3][3];
    printarray(nums,3,3);
}