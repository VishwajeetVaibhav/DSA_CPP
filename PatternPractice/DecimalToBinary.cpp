#include<iostream>
 using namespace std;

 int decimalToBinaryMethod(int n){
    while(n>0){
        int bit = n%2;
        cout<<bit<<endl;
        n = n / 2;
    }
    return 0 ;
 }

 int main(){
    int n;
    cin>>n;
    int binary = decimalToBinaryMethod(n);
 }