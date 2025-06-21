#include<iostream>
using namespace std;
class box{
    double wid;
    public:
    void Setwidth(double a){
        wid=a;
    }
    void friend printwidth(box b1){
        cout<<"Width of the box="<<b1.wid;
    }
   
    
};
void printwidth(box b1){
        cout<<"Width of the box="<<b1.wid;
    }
   
 

int main(){
    box b1;
    Setwidth(10);
    printwidth(b1);
}