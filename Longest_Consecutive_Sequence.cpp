class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int c=1;
        int max=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                c++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                if(c>max){
                    max=c;
                }
                c=1;
            }
        }
        if(c>max){
             max=c;
        }
        return max;
    }
};
