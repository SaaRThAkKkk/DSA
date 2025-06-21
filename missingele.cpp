#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
int check(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    int i=0;
    while(i<n){
        if(v[i]!=i){
            return i;
            break;
        }
        
        else i++;
    }
} 
using namespace std;
int main(){
    int arr[]={3,1,0};
    check(arr);
    

}