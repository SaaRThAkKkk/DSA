#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n-1;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=(m);i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int l=n+1;l<=2*n-i;l++){
            cout<<l;
        }
        cout<<endl;
    }


    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    //Alternate method
    // cout<<endl;
    // for(int i=1;i<=(m);i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<" ";
    //          a++
    //     }
    //     for(int l=1;l<=n-i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
}
    
    return 0;
}