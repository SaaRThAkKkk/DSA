#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotele=arr[si];//phla elemt hoga to arr[0] ni likh dena kyuki dusre wle array ka insexing pi+1 se chalu hoga
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotele) count++;
    }
    int pivotidx=count+si;//pivotidx hi return krna h pr phle khuvch aur kam baki h
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=arr[pivotidx]) i++;
        if(arr[j]>arr[pivotidx]) j--;
        else if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;


}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);//this will return me the pivot index as well as arrange the array 
    //such that ki usse chote elemets left m aur usse bde right m
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
