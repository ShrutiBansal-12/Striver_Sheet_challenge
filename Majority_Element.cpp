//----------------Approach 1-----------------//
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(); 
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};


//---------------Approach 2----------------//
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(); 
        int size=n/3;
        vector <int> ans;
        vector <int> unique;
        sort(nums.begin(),nums.end());
        int i=0;
        for(i;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                unique.push_back(nums[i]);
            }
        }
        unique.push_back(nums[i]);
        int s=unique.size();  
        for(int i=0;i<s;i++){
            int d=unique[i];
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[j]==d){
                    c++;
                }
            }

            if(c>(int)size){
                ans.push_back(d);
            }
        }
        return ans;
    }
};
