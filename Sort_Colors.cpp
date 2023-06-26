class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c_zero=0, c_one=0, c_two=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c_zero++;
            }
            if(nums[i]==1){
                c_one++;
            }
            if(nums[i]==2){
                c_two++;
            }
        }
        int j=0;
        for(j;j<c_zero;j++){
            nums[j]=0;
        }
        for(j;j<c_zero+c_one;j++){
            nums[j]=1;
        }
        for(j;j<c_zero+c_one+c_two;j++){
            nums[j]=2;
        }  
    }
};
