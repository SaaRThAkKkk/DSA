#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums1={1,2,2,3,4};
    vector<int> nums2={2,3,6,2,7,8,9};
    vector<int> nums;
    vector<int> num;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                nums.push_back(nums1[i]);
            }
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<num.size();i++){
        cout<<nums[i]<<" ";
    }

}