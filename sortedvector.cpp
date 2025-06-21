//dono array sorted honge by default tbhi ye sorted array return krega//

#include<iostream>
#include<vector>
using namespace std;
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
int main(){
    int arr1[]={1,4,5,8};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    vector<int> v1(arr1,arr1+n);
    int arr2[]={2,6,9,10};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    vector<int> v2(arr2,arr2+m);
    vector<int> v(n+m);
    merge(v1,v2,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}