#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    char ch='A';
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            cout<<ch<<" ";
            j++;
            ch=ch+1;
        }
        cout<<endl;
        ch=ch-2;
        i++;
    }
    return 0;
}