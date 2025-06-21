#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr);
     for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    vector <int> res(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=0;j<n;j++){
            if(res[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    mindex=j;
                }
            }
        }
        arr[mindex]=x;
        res[mindex]=1;
        x++;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
}