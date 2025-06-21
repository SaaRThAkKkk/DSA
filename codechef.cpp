#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;
  while(T--){
      int A;
      int B;
      cin>>A;
      cin>>B;
      int x=A;
      int count=0;
      if(A-B>10) cout<<0;
      else{
          while(A-B>=10 && x-B>=10){
          A=A=2;
          x=x+3;
          count++;
          }
      cout<<count;
      }
  }
  return 0;
}