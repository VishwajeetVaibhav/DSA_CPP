#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1,n;
    char ch='A';
    cout<<"Enter desired number : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
        }
        ch=ch+1;
        cout<<endl;
        i++;
    }
    return 0;

}