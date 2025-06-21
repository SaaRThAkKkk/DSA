# include <iostream>
using namespace std;
int main(){
    int array[]={3,8,7,6,9,10};
    int size =6;
    int max=array[0];
    //cout<<max;
    for(int i=1;i<size;i++){
        if(array[i]>max){
            array[i]=-1;
        }   
    }
    //cout<<max<<endl;
    int slarg=array[0];
    //cout<<slarg;
    for(int j=1;j<size;j++){
        if(array[j]>slarg){
            slarg=array[j];
        }
        cout<<slarg<<endl;
    }
   // cout<<slarg<<endl;
    return 0 ;
}
