#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case 
    if(n==1) return 1;
    //recursive call
    else  return n*factorial(n-1);
}

int Sumupton(int n){
    //base case
    if(n==1) return 1;
    //recursive call
    else return n+Sumupton(n-1);
}

int fibo(int n){
    //base case
    if(n==0 || n==1) return n;
    else return fibo(n-1)+fibo(n-2);
}

bool checksorted(vector<int>& vec,int idx){
    //base case
    if(idx==vec.size()-1) return true;
    else{
        if(vec[idx]<vec[idx+1]) return checksorted(vec,idx+1);
        else return false;
    }
}

int main(){
    // int n;
    // cin>>n;
    vector<int>v={2,3,12,8,9};
    if(checksorted(v,0)) cout<<"the array is sorted";
    else cout<<"Not sorted";
}