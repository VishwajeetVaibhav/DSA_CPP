#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';
    i=1;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}