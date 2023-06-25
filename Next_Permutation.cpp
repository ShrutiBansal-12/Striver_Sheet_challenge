class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return;
        }
        int i=1;
        int lastInc=-1;
        while(i<n){       //to find peak element
            if(nums[i]>nums[i-1]){
                lastInc=i;
            }
            i++;
        }

        //if peak doesnot exist ie in descending order then return ascending sorted array
        if(lastInc==-1){
            int i, key, j;
            for (i = 1; i < n; i++){
                key = nums[i];
                j = i - 1;
                while (j >= 0 && nums[j] > key){
                    nums[j + 1] = nums[j];
                    j = j - 1;
                }
                nums[j + 1] = key;
            }
            return;
        }

        int index=lastInc;
        for(int i=lastInc;i<n;++i){
            if(nums[i]>nums[lastInc-1] && nums[i]<nums[index]){
                index=i;
            }
        }
        swap(nums[lastInc-1],nums[index]);   //swapping
        sort(nums.begin()+lastInc,nums.end());     //sorting after peak element
    }
};
