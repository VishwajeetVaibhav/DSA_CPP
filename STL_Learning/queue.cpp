#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("love");
    q.push("kumar");
    q.push("hello");
    q.front(); //To get the first element.
    q.pop(); //To delete the first element in queue.

    cout<<q.size();
    q.empty();

    // Time complexity of all operation will be O(1).

}