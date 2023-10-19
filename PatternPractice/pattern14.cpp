#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    char ch='A';
    while(i<=4)
    {
        j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}