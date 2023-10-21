#include<iostream>
using namespace std;

int main(){
    // DOUBLE TO INT


    double pi = 3.14159265;
    int intPi = (int)pi; //Explicit converion from double to int.
    cout << intPi << endl;
    // We use () operator to perform explicit conversion.



    // FLOAT TO CHAR
    float floatingNumber = 65.5;
    char charValue = (char)floatingNumber;//Explicit conversion from float to char.
    cout<< charValue <<endl;

    // INT TO FLOAT
    int a = 10;
    int b = 3.0;
    int c = ((float)a)/b; //Explicit conversion from int to float.
    cout<<c<<endl;

}