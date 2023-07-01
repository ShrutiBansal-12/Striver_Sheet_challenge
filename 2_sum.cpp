class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=size(nums);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                if (sum==target){
                    return {i,j};
                    //ans.push_back(i); 
                    break;
                }
            }
        }
        return {};  
    }
};
