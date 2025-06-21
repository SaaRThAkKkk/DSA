void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        //finding pivot index
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
            
        }
        //if your array is the largest permutation possible
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //sorting the remaining elements after pivot
        reverse(nums.begin()+idx+1,nums.end());
        //finding the index of the element which is just larger than the number at idx
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        
        //swapping idx and the number which is just larger than the pivot and is placed at j
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        
    }