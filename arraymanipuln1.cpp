#include <iostream>
using namespace std;
int IndexOfLargestnumber(int array[],int size){
    int max=array[0];
    int max_index=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            max_index=i;
        }
    }
    return max_index;
}
int main(){
    int array[]={6,7,8,9,10,5};
    array[IndexOfLargestnumber(array,6)]=-1;
    int secondlargestindex=IndexOfLargestnumber(array,6);
    cout<<array[secondlargestindex];
    return 0;
}