class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();   //rows
        int n=matrix[0].size();   //cols
        int arr[m*n];
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[k]=matrix[i][j];
                k++;
            }
        }
        bool presence=false;
        int start=0;
        int end=m*n-1;
        int mid=start+((end-start)/2);
        while(start<=end){
            if (arr[mid]==target){
                presence=true;
            }
            if(target>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+((end-start)/2);
        }
        return presence;
    }
};
