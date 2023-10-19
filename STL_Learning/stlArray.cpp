#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3] = {1,2,3};       //This is basic arrya which we use genrally.

    // To create stl array : 
    array<int , 4> a = {1,2,3,4};

    // To get size of stl array we will use size() function:

    int size = a.size();

    // To print any element in stl arrya randomly we use at(index_value) function: 
     cout<<a.at(2);

    //  To check wether array is empty or not we use empty() function :
    cout<<a.empty(); //It will return 1 for true and 0 for false .

    cout<<a.front(); //To get first element.
    cout<<a.back(); //To get last element. 

}