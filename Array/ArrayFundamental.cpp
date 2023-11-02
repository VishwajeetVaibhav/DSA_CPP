#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout<<"Size of a: "<<sizeof(a)<<endl;
    cout<<"Address of a : "<< &a <<endl;

    int arr[10];
    cout<<"Size of arr: "<<sizeof(arr)<<endl;
    cout<<"Base address of Arr is: "<<&arr<<endl;
}