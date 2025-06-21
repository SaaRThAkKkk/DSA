#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;//size of the window
    vector<int> ans(n-k+1);
    queue<int> q;
    //creating a queue containing all the indexes of the negtive elements
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0;
    while(i<=n-k){
        while(q.size()>0 && q.front()<i) q.pop();//agr index i se kam h to vo phle kisi window ka negative hoga
        if(q.size()==0 || q.front()>i+k) ans.push_back(0);// agr first negative ka index windoe se bahar h to 0
        else ans.push_back(arr[q.front()]);// baki case m us index p arr m jo negativve number h vo dal do
        i++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}