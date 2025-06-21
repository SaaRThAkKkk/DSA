class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int n=strs.size();
     if(n==1){
         return strs[0];
     }
     sort(strs.begin(),strs.end());// sort kr lia taki fr last k do  ko bs check krna pde
     string first=strs[0];
     string last=strs[n-1];
     string s="";//empty string to store the common part
     for(int i=0;i<min(first.size(),last.size());i++){
         if(first[i]==last[i]) s+=first[i];//jo same h firsts aur last m usko us empty string mm add krte jana h bs fr
         else return s;
     }
     return s;    
    }
};