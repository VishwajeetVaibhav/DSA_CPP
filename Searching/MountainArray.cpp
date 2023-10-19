#include<iostream>
using namespace std;

int MountainArray(int arr[],int size){

    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    return start;

}

int main(){

    int arr[]={0,1,0};
    int size = 3;
    cout<<MountainArray(arr,size);
    return 0;
}