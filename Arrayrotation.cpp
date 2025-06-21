#include<iostream>
#include<vector>
using namespace std;
void reversepart(vector<int> &v,int a,int b){
     int i=a;
    int j=b;
	while(i<=j){
		int temp=v[i];
		v[i]=v[j];
		v[j]=temp;
		i++;
		j--;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
    void display(vector<int> &v){
    	for(int i=0;i<v.size();i++){
    		cout<<v[i]<<" ";

    	}
    
}
int main(){
	vector<int> v={1,6,2,3,7,4,8};
	display(v);
   
	reversepart(v,1,5);

}