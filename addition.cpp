#include <iostream>
#include<string>
using namespace std;
int main()
{
    vector<string> buildArray(vector<int>& target, int n) {
        int num=1;
        vector<string> res;
        while(num<=n){
            for(int i=0;i<target.size();i++){
                if(num==target[i]){
                    res.push_back("Push");
                    num++;
                    break;
                }
            }
            res.push_back("Push");
            res.push_back("Pop");
            num++; 
        }
        return res;
    }
    vectro<string> answer()=buildArray([1,3],3);
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    }