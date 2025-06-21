#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[]={5,5,6,6,8,10};
    int target=5;
    int lo=0;
    int hi=5;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(nums[mid]==target ){
            if(nums[mid+1]!=target){
                cout<<mid;
                break;
            }
            else{
                lo=mid+1;
            }
        }
        else if(nums[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
}