#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int toFind)
{
    int start = 0, ans = -1;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {

        if (arr[mid] == toFind)
        {
            ans = mid;
            end = mid-1;
            
        }
        else if (arr[mid] > toFind)
        {
            end = mid - 1;
        }
        else if (arr[mid] < toFind)
        {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size , int toFind){

        int start = 0, ans = -1;
    int end = size -1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {

        if (arr[mid] == toFind)
        {
            ans = mid;
            start = mid + 1; 
            
        }
        else if (arr[mid] > toFind)
        {
            end = mid - 1;
        }
        else if (arr[mid] < toFind)
        {
            start = mid + 1;
        }

        mid = (start+end)/2;
    }
    return ans;
}

int main(){

    int arr[]={1,2,3,3,3,3,4,5};
    int size = 8;
    int toFind = 3;
    cout <<"First occurance of " <<toFind<<" : "<< firstOcc(arr,size,toFind)<<endl;
    cout <<"Last occurance of " <<toFind<<" : "<< lastOcc(arr,size,toFind);
    return 0 ;
}