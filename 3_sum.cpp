class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> outside;
        sort(nums.begin(),nums.end());
        int n=nums.size(); int x,y,z,sum=0;
        for(int i=0;i<n-1;i++){
            x=nums[i];
            for(int j=i+1;j<n;j++){
                y=nums[j];
                sum=nums[i]+nums[j];
                for(int k=0;(k<n && (k!=i && k!=j));k++){
                    if(nums[k]+sum==0){
                        vector<int> inside;
                        inside.push_back(nums[i]);
                        inside.push_back(nums[j]);
                        inside.push_back(nums[k]);
                        sort(inside.begin(),inside.end());
                        int l=outside.size();
                        if(l==0){
                            outside.push_back(inside);
                        }
                        else{
                            int i=0;
                            for(i;i<l;i++){
                                if((outside[i][0]==inside[0]) && (outside[i][1]==inside[1]) && (outside[i][2]==inside[2])){
                                    break;
                                }
                            }
                            if (i==l){
                                outside.push_back(inside);
                            }
                        }
                    }     
                }
            }
        }
        return outside; 
    }
};
