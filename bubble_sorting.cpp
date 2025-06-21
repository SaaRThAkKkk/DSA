#include<iostream>
#include <vector>
using namespace std;
int main(){
	int n=6;
	int arr[]={6,4,5,3,2,1};
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	//Bubble Sort
	// for(int i=0;i<n-1;i++){		//max to max n-1 times pass krna pdega
	// 	for(int j=0;j<n-1-i;j++){
	// 		if(arr[j]>arr[j+1]){ // last element chor k sort krna h kyuki greatest elemt last m jate jyega
	// 			int temp=arr[j+1];
	// 			arr[j+1]=arr[j];
	// 			arr[j]=temp;
	// 		}
	// 	}
	// }
	//Optimised Bubble Sort
	for(int i=0;i<n-1;i++){		//max to max n-1 times pass krna pdega
		bool flag=true;
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){ // last element chor k sort krna h kyuki greatest elemt last m jate jyega
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				flag=false; // jha swapping hui wha falg ko false kr dia
			}
		}
		if(flag==true){ // agr loop k bd flag true reh gya mtlb swapping nhi hui to loop break kr do
			break;
		}
	}
	cout<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}

}
