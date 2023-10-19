#include<iostream>
using namespace std;
int main()
{
    int i,j;
    i=1;
    while(i<=4)
    {
        j=1;
        while(j<=4)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}