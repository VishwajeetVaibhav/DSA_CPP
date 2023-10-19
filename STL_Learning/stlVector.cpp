#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v; //Syntax to create vector array.

    // Some more ways to initialise vector array : 

    vector <int> a(5,2); // It will create a 5 sized array with value 2 in each index {2,2,2,2,2}

    vector <int> newArr(a); //To copy value of a into newArr vector array

    cout<< "Cpacity : " << v.capacity()<<endl; // To get allocated capacity.
     
    //  We can use front() and back() in this : 
    
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5); //To insert  any value in array at last index available. 
    cout<<"capacity : "<< v.capacity();

    cout<<v.at(2); //To access element randomly in vector array.

    cout<<"before pop : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); //Delets element from last index . 


    cout<<"after pop : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //To clear vector array use clear() fucntion .

    v.clear();

    cout<<"After clearing array "<<v.size();
}