#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char chr='A';
    i=1;
    while(i<=3)
    {
        j=1;
        while(j<=3)
        {
            cout<<chr;
            j++;
        }
        cout<<endl;
        chr=chr+1;
        i++;
    }
    return 0;
}