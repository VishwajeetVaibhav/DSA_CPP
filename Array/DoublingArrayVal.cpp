#include<iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i = 0; i<10 ; i++){
        cout<<"Enter Value in index "<<i<<": ";
        cin>>arr[i];
        cout<<endl;
    }
cout<<"outside of loop";
cout<<endl;
    for(int i = 0; i<10 ;i++){
        cout<<2*arr[i];
        cout<<endl;
    }
}