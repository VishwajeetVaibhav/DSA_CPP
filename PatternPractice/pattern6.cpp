#include<iostream>
using namespace std;
int main()
{
    int i,j,count=1;
    
   for(i=1;i<=4;i++)
   {
    j=1;
    for(;j<=i;j++)
    {
        cout<<count<<" ";
        count++;

    }
    cout<<endl;
   }
    return 0;
}