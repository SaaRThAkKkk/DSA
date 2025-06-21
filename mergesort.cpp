#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int>& v1,vector<int>& v2){
    int count=0;
    int i=0;
    int j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            count+=(v1.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int> v1,vector<int> v2,vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            v[k]=v2[j];
            j++;
            k++;
        }
        else{
            v[k]=v1[i];
            i++;
            k++;
        }
    }
    if(i==v1.size()){
        while(j<v2.size()){
            v[k]=v2[j];
            j++;
            k++;
        }
    }
    else if(j==v2.size()){
        while(i<v1.size()){
            v[k]=v1[i];
            i++;
            k++;
        }
    }
    
} 
void mergesort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int j=0;j<n2;j++){
        v2[j]=v[j+n1];

    }
    //recursion
    mergesort(v1);
    mergesort(v2);
    //inversion counting
    count+=inversion(v1,v2);
    //merging
    merge(v1,v2,v);
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    cout<<count;
}