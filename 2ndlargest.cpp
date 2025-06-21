# include <iostream>
using namespace std;

int main(){
    int array[]={2,3,8,9,7,6};
    int n=6;
    int max=array[0];
    int smax=1;
    for(int i=0;i<6;i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int j=0;j<6;j++){
        if(array[j]>smax && (array[j]!=max) ){
            smax=array[j];
        }
    }
    cout<<smax;
    return 0;
}

