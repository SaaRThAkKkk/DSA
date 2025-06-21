#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n=3;
    int k=1;
    vector<vector<int>> vect(n,vector<int>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vect[i][j]=k;
            k++;
        }
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cout<<vect[a][b]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
