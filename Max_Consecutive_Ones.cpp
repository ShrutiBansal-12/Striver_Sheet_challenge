class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int c=0;
        int i=0;
        for(i;i<n;i++){
            if(nums[i]==1){
                c++;
            }
            else{
                if(c>maxi){
                    maxi=c;
                }
                c=0;
            }
        }
        if(c>maxi){
            maxi=c;
        }
        return maxi;
    }
};
