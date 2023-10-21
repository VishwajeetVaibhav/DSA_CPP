#include<iostream>
using namespace std;

// void SumOfThreeNumber(int a , int b , int c){
//     int result = a+b+c;
//     cout<<result<<endl; //This function is returning nothing.
// }

int PrintSum(int a , int b , int c){
    int result = a+b+c;
    return result;
}

int main(){
    // SumOfThreeNumber(1,2,3); //Void Function

    cout<<PrintSum(4,5,6); //Function returning integer value.
    return 0;
}