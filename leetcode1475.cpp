#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={8,4,6,2,3};
    int n=nums.size();
        vector<int> nsi;
        nsi[n-1]=-1;
        stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && nums[i]<nums[st.top()]){
                st.pop();
            }
            if(nums[i]>nums[st.top()]){
                nsi[i]=st.top();
            }
            if(st.size()==0) nsi[i]=-1;
            st.push(i);
        }
        
        for(int i=0;i<n;i++){
            cout<<nsi[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(nsi[i]==-1) nsi[i]=nums[i];
            else nsi[i]=nums[i]-nums[nsi[i]];
        }
}