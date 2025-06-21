//greedy lec 01 problem last
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
ll minimumcosttocutrectangles(int n,int m,vector<ll> horizontal,vector<ll> vertical){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hz=1;
    int vr=1;
    //initilaising the number of horizontal and vertical blocks by 1 initially
    int h=0,v=0;//two pointers for traversing in the two vectors and finding thre greatest element
    int cost=0;
    while(h<horizontal.size() and v<vertical.size()){
        if(vertical[v]>horizontal[h]){
            cost+=vertical[v]*vr;
            hz++;//on cutting vertically horizontal block increase/
            v++;//increasing the index
        }
        else{
            cost+=horizontal[h]*hz;
            vr++;//on cutting horizontally vertical blocks increase
            h++;
        }
    }
    //for the case if any one vector gets finished but the oter one still has the elements left
    while(h<horizontal.size()){
        cost+=horizontal[h]*hz;
        vr++;//on cutting horizontally vertical blocks increase
        h++;
    }
    while(v<vertical.size()){
        cost+=vertical[v]*vr;
        hz++;//on cutting vertically horizontal block increase/
        v++;//increasing the index
    }
    return cost;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<ll> horizontal,vertical;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    cout<<minimumcosttocutrectangles(n,m,horizontal,vertical);
}
