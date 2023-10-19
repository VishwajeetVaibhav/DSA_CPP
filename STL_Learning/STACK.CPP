#include<iostream>
#include<stack>

using namespace std;

int main(){
     stack<string> s;

     s.push("Vish0");
     s.push("Vish1");
     s.push("Vish2");
     s.push("Vish3");

    //  Last element entered in stack is "Vishu3" thatswhy topmost elementt is Vishu3.

    cout<<"Top Element : "<< s.top()<<endl;   // Output : Vishu3

    s.pop();

    cout<<"top element : "<<s.top()<<endl;   // Output : Vishu2

    cout<<s.size(); //To get size of stack;

    cout<<s.empty(); //To check wether it is empty or not. returns in 0 1 formate. 

}