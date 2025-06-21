#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={0,1,2,3,4,6,7,9,10};
    int n=9;
    //conventonal method for finding the element using O(n)
    // for(int i=0;i<n;i++){
    //     if(nums[i]!=i){
    //         cout<<i;
    //         break;
    //     }
    // }
    int lo=0;
    int hi=9;
    int ans=-1;
    while(hi>lo){
        int mid=(hi+lo)/2;
        if(nums[mid]==mid ){
            lo=mid+1;
           
        }
        else if(nums[mid]!=mid){
            ans=mid;
            hi=mid-1;
        }
        
        
    }
    cout<<ans;
    
}