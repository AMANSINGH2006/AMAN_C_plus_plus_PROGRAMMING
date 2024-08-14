#include<iostream>
using namespace std;
int oddOccuringElement(int arr[],int size){
    int s = 0;
    int e = size - 1;
    int mid = s + ((e-s)>>1);
    while(s<=e){
         int currValue = arr[mid];
         int leftValue = -1;
         int rightValue = -1;
         if(mid-1 >= 0){
            leftValue = arr[mid-1];
         }
         if(mid+1 < size){
            rightValue = arr[mid+1];
         }
         if((leftValue != currValue) && (rightValue != currValue)){
            return mid;
         }
         if(currValue == leftValue){
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){       //odd
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
         }
         if(currValue == rightValue){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1){       //Even
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
         }
        mid = s + ((e-s)>>1);
    }
    return -1;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6,7,7,8,8};
    int size = sizeof(arr)/sizeof(int);
    int ans = oddOccuringElement(arr,size);
    cout<<"Odd occuring Elements index :"<<ans<<endl;
    cout<<"Odd occuring Element is : "<<arr[ans];
}