#include <iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void Setdata(int x, int y){
        a=x;
        b=y;
    }
    void Showdata(){
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    Complex operator + (Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.Setdata(6,7);
    c2.Setdata(8,9);
    c3=c1+c2;
    c1.Showdata();
    c2.Showdata();
    c3.Showdata();


}