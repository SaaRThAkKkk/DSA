#include<iostream>
using namespace std;
int main(){
	int arr[]={5,3,4,1,2};
	int n=5;
	for(int i=1;i<n;i++){
		while(arr[i]<arr[i-1]){
			swap(arr[i-1],arr[i]);
			i--;
			if(i==0) break; // ya directly while m j>o && bhi kr skte the
		}

	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
}
