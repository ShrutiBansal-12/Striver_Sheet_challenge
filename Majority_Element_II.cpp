//------------------Approach 1-------------//
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



//-----------------Approach 2--------------//
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int sz=nums.size();
        int num1=-1,num2=-1,count1=0,count2=0,i;
        for(i=0;i<sz;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector <int> ans;
        count1=count2=0;
        for(i=0;i<sz;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
        }
        if (count1>sz/3){
            ans.push_back(num1);
        }
        if (count2>sz/3){
            ans.push_back(num2);
        }
        return ans;
    }
};
