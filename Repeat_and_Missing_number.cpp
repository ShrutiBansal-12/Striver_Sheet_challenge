class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(nums[i]);
        }
        int x=0;
        sort(arr.begin(),arr.end());
        for(int j=0;j<nums.size()-1;j++){
            if (arr[j]==arr[j+1]){
                x=arr[j];
                break;
            }
        }
        return x;
    }
};
