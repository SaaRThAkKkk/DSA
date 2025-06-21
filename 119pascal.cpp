#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1={1,2,3};
	vector<int> v2={4,5};
	vector<int> v3={6,7,8,9};
	vector<vector<int> > v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v1.push_back(v[1][0]);
	cout<<v1[3];
	return 0;
}
