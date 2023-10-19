#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=1;
    while(i<=4)
    {
        j=i;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}