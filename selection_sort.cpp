#include<iostream>
using namespace std;
int main(){
	int arr[]={5,3,4,1,2};// 1 7 4 2 5 6 3
	int n=5;
	int mindex=-1;
	for(int i=0;i<n;i++){
		int min=arr[i];
		for(int j=i;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				mindex=j;
			}
		}
		swap(arr[i],arr[mindex]);// swap function indexes ki values ko swap krta h
		// swap k arguements indexes hote h numbers ni!!!


	}
	for(int j=0;j<n;j++){
			cout<<arr[j]<<" ";
		}
	
	
}
