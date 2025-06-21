#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minproduct(vector<int>& arr){
    int zc=0,pc=0,nc=0;
    int pprod=1,nprod=1;
    int minnegative=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) zc++;
        if(arr[i]<0){
            nc++;
            nprod*=arr[i];
            minnegative=max(arr[i],minnegative);
        }
        else{
            pc++;
            pprod*=arr[i];
        }
    }
    if(nc==0){
        if(zc>0) return 0;//if negative nhi h aur zeros h to minimum 0 hoga
        else{
            //zeroes nhi h to minimum element jo psotitiv eh vo akele hi answer hoga
            auto it=min_element(arr.begin(),arr.end());
            return *it;
        }
    }else{
        if(nc%2==-0){
            //even negatives lowest product will be after ignoring the highest negative element * postitve product
            return (nprod/minnegative)*pprod;

        }else{
            //odd negatives
            return nprod*pprod;
        }
    }
}
using namespace std;
int main(){
    vector<int> arr={2,3,-4,-7,6,8};
    minproduct(arr);
    return 0;
}