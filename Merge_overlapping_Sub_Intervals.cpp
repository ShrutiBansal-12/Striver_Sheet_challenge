class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //optimal approach-iterating only once
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if (ans.empty() || intervals[i][0]>ans.back()[1]){   //if ans is empty or non-overlapping
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);   //if overlapping
            }                                                      // updating last as max of elements
        }
        return ans;
    }
};
