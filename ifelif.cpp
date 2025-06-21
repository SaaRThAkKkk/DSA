#include <iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age<=12){
        cout<<"You are in children category";
    }
    else if (age<=18){
        cout <<"You are in the category of teenagers";
    }
    else if (age>18)  {
        cout <<"You are a adult";
    } 
    else{
        cout<<"Please enter a valid age";
    }
    return 0;
}