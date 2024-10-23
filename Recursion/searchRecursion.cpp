#include<iostream>
using namespace std;
bool searchTarget(int arr[], int target, int size, int index){
    if(index >= size){
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    searchTarget(arr, target, size, index+1);

}
int main(){
   int arr[] = {10,20,30,40,50};
   int target = 30;
   int size = 5;
   int index = 0;
   int ans = searchTarget(arr, target, size, index);
   cout<<"ans = "<<ans;
}