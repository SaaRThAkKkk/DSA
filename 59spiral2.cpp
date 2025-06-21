#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n=3;
    vector<vector<int>> v[n][vector<int>(n)];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=1;k<(n*n+1);k++){
                    v[i][j]=k;
                }
            }
        }
    	for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
}
