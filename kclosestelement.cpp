//leetcode 658
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //SC--> O(k)
        //TC --> O(logn+ k logk)
        int n=arr.size();
        vector<int> v(k);
        if(x<arr[0]){//agr element chota ho gya chup chap suru k k elemts dal do
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }
        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                v[j]=arr[i];
                i--;
                j--;
            }
            return v;
        }
        int lo=0;
        int hi=n-1;
        int mid=-1;// bahar isliye define kia kyuki bd m iska need pdega
        bool flag=false;// element is absent
        int t=0;//index of the answer array t
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                v[t]=arr[mid];
                t++;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
        int lb=hi;// ye dono ub and lb tb k liye h jb element mila hi nhi
        int ub=lo;// jb element hai nii to loop breaks when hi<lo....
        if (flag==true){
            lb=mid-1;
            ub=mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2){// diff same hone p lefft elr ko priority dena h
                v[t]=arr[lb];
                lb--;
            }
            else{
                v[t]=arr[ub];
                ub++;
            }
            t++;
        }
        if(lb<0){// directly up k elemnts ko push back krdena h jb tk size h ans arry m
            while(t<k){
                v[t]=arr[ub];
                ub++;
                t++;
            }
        }
        if(ub>n-1){
            while(t<k){
                v[t]=arr[lb];
                lb--;
                t++;
            }
             
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};