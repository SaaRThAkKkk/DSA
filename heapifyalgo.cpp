//heapify algo is same as that of implementation of min heap using array in pop function
//we are given an array and we need to arrange it in a manner suc that it represents a min heap
//we just apply heapify for the non leaf nodes bcz they dont have children so we cant check
//no of leaf nodes =n/2 for even sized min heap and n/2+1 for odd sized array
// we just find the left and right child for every non lef node and check if they are smaller than tha parent
//if they are greater we swap it with the minimum of the left and right child and keep on doing this 
//until each index is throughly checked

#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i,int arr[],int n){
    while(true){
        int left=2 * i,right= 2 * i + 1;
        if(left >= n) break;
        if(right >= n){//only right is out of bound left is in its limit
        //agr left bhi out of bound hota to phle wla loop hi bahr ho jata
            if(arr[i] > arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }
        //now when both the left and right are in its limit
        if(arr[left]<arr[right]){
            if(arr[i] > arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else break;
        }
        else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else break;
        }

    }
}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n=sizeof(arr)/4;
    print(arr,n);
    for(int i=n/2;i>=0;i--){//n/2 in case of even sized array or n/2 +1 for odd sized array
        heapify(i,arr,n);
    }
    print(arr,n);
}