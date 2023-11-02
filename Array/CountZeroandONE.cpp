#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,0,0,0,1,1,1,1,0,1};
    int CoutnZero = 0;
    int CountOne = 0;

    for(int i = 0; i<10 ;i++)
    {
        if(arr[i]==0){
            CoutnZero = CoutnZero+1;
        }
        else if(arr[i]==1){
            CountOne = CountOne+1;
        }
    }
    cout<<"Total number of Zeros are : "<<CoutnZero<<endl;
    cout<<"Total number of Ones are : "<<CountOne<<endl;
}