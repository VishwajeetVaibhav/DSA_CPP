#include<iostream>
using namespace std;
int main()
{
  int i=1,n,cnt=1;
  cin>>n;
  while(i<=n)
  {
    int j=1;
    while (j<=n)
    {
        cout<<cnt;
        cnt=cnt+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;

    
  }  
} 