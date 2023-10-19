#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid= (start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[]={12,13,56,77,87,90};
    int key = 87;
    int size = 6;

    cout<<BinarySearch(arr,size,key);
}