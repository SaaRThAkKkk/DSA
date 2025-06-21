#include<iostream>
# include<vector>
using namespace std;
int main(){
	vector<int> v={1,2,3,4,5,6};
	vector<int> p;
	for(int i=v.size()-1;i>=0;i--){
		p.push_back(v[i]);

	}
	for(int i=0;i<=p.size();i++){
		cout<<p[i]<<" ";
	}

}