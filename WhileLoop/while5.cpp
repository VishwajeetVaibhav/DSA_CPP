#include<iostream>
using namespace std;
int main()
{
    int row=1,n,count=1;
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}