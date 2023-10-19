#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    //We can perform insertion and deletion from both the end in deque;

    d.push_back(1);
    d.push_front(2);

    d.pop_back(); //It delets from array and prints it .
    d.pop_front();

    cout<<d.empty();

    cout<<d.size();

    // to erase from specific position to specific position ;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase" << d.size()<<endl;

    for(int i:d){
        cout<<i<<endl;     //Iterator for deque d;
    }
}