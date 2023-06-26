class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=m+n;
        for(int i=0;i<n;i++){
            nums1[size-i-1]=nums2[n-i-1];
        }
        for(int j=0;j<size;j++){
            for(int k=0;k<(size-j-1);k++){
                if (nums1[k]>nums1[k+1]){
                    int temp=nums1[k];
                    nums1[k]=nums1[k+1];
                    nums1[k+1]=temp;
                }
            }
        }  
    }
};
