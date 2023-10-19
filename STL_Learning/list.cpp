#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;

    list<int> naya(5, 20); // Various ways to initialise list  

    // To insert values in last index 
    l.push_back(1);
    l.push_back(2);


    list<int> n(l); //To copy l in n .
    for(int i:l){
        cout<<i<<" ";   //Iterator for list l;
    }
    cout<<endl;

    l.erase(l.begin()); //to earase from specific position.

    cout<<"after erase : ";

    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"size of list "<< l.size()<<endl;
}