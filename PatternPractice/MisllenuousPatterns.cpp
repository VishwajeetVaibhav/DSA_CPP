#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    int i,j;
    // for(int i=0;i<=n;i++){
    //     for(int j=0; j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         if(i==0||i==n-1||j==0||j==n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // int n1=10;
    // // if(cout<<n1){
    // //     cout<<"Boby";
    // // }
    // if(cin>>n){
    //     cout<<"Boby";
    // }


    // for(i=0;i<n;i++){

    //     for(j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }

    //         for(j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // for(i=0;i<=n;i++){

    //     for(j=0;j<=n-i-1;j++){
    //         cout<<" ";
    //     }

    //         for(j=0;j<=i+1;j++){
    //         cout<<"* ";
    //     } 
    //     cout<<endl;
    // }
    // for(i=0;i<=n;i++){
    //     for(j=0;j<=i;j++){
    //         cout<<" ";
    //     }
    //     for(j=0;j<=n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // int k = 0;
    
    // for(i=1;i<=7;i++){
    //     i<=4?k++:k--;
    //     for(j=1;j<=4;j++){
    //         if(j<=k){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // for(i=1;i<=3;i++){
    //     for(j=1;j<=5;j++){
    //         if(j>=i && j<=6-i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    
    // int k = 4;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<7-i;j++){
    //         cout<<k;
    //         k--;
    //     }
    //     k = 4;
    //     k=k-i;
    //     cout<<endl;
    // }

    // for(i=1;i<=5;i++){
    //     for(j=1;j<=9;j++){
    //         if(j==i||j==10-i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }


    // for(i=1;i<=7;i++){
    //     if(i<=4){
    //         for(j=1;j<=5-i;j++){
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         for(j=1;j<=i-3;j++){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    for(i=1;i<=7;i++){
        if(i<=4){
            for(j=i;j<=4;j++){
                cout<<"*";
            }
        }
        else{
            for(j=8-i;j<=4;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }


} 