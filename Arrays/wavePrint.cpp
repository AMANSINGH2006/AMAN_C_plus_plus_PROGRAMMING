#include<iostream>
#include<vector>
using namespace std;
int waveMatrix(vector<vector<int>>wave){
        cout<<"The elements of wave matrix are :\n";
        int m = wave.size();
        int n = wave[0].size();
        for (int j = 0; j < n; j++){
            if(j%2==0){
                for (int i = 0; i < m; i++){
                    cout<<wave[i][j]<<'\t';
                }
            }
            else{
                for (int i = m - 1; i >= 0; i--){
                    cout<<wave[i][j]<<'\t';
                }
            }
            cout<<endl;
        }
}
int printArray(vector<vector<int>>arr){
    cout<<"The elements of Original array are :\n";
    for (int i = 0; i <arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<'\t';
        }
        cout<<'\n';
    }
    return 0;
}
int main(){
    int rows,cols;
    cout<<"Enter the size of array:\n";
    cin>>rows>>cols;
    vector<vector<int>>arr(rows , vector<int>(cols));
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            cin>>arr[i][j];
        }  
    }
    printArray(arr);
    waveMatrix(arr);
}