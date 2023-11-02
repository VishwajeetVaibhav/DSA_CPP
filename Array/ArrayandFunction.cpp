#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    printArray(arr,size);
}