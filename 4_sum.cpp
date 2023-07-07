class Solution {
public:
    //two pointer approach
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> outside;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long newtarget=(long long)target-nums[i]-nums[j];
                int low=j+1, high=n-1;
                //apply binary search
                while(low<high){
                    if(nums[low]+nums[high]<newtarget){
                        low++;
                    }
                    else if(nums[low]+nums[high]>newtarget){
                        high--;
                    }
                    else{
                        outside.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int temp1=low,temp2=high;
                        while(low<high && nums[low]==nums[temp1]){
                            low++;
                        }
                        while(low<high && nums[high]==nums[temp2]){
                            high--;
                        }
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]){
                        j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]){
                    i++;
            }
        }
        return outside;
    }
};
