#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,4,5,6};
    int target = 9;
    bool flag = 0;
    for(int i = 0; i<5 ;i++){
        if(arr[i]==target){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
}