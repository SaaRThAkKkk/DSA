class Solution {
public:
    bool check(int mid,vector<int>& weights, int days){
        int n=weights.size();
        int capacity=mid;
        int day=1;
        for(int i=0;i<n;i++){
            if(weights[i]<=capacity){
                capacity=capacity-weights[i];
            }
            else{
                day++;
                capacity=mid;
                capacity=capacity-weights[i];
            }
        }
        if(day>days){
            return false;
        }
        else{
            return true;
        }
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int max=INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
            if(weights[i]>max) max=weights[i];
        }
        int lo=max;
        int hi=sum;
        int min_capacity=sum;
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            if(check(mid,weights,days)){
                min_capacity=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return min_capacity;
    }
};SW3Q2