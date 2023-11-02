#include<iostream>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5,6,7};
    // int brr[5] = {1,4,5,6,3};
    // // int crr[2] = {1,2,3,4,5}; //Error = excess element in array.


    // // ===============================Indexes of Array : ===============================
    // int arr[5] = {5,7,8,34,23};
    
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // // cout<<arr[4]<<endl; //23 Output

    // ==================================Input/Output in Array============================


    int arr[5];
    int n = 5;
    for(int i = 0; i<n;i++){
        cout<<"Enter the value in array in index : "<<i<<endl;
        cin>>arr[i];
        cout<<endl;
    }

    for(int i =0 ;i <n ;i++){
        cout<<"Value of array in index "<<i<<" ";
        cout<<arr[i];
        cout<<endl;
    }
}