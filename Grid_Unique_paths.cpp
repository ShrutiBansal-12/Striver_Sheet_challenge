//-----------------Approach 1-DP--------------//
class Solution {
public:
    int dp[101][101]{};
    int uniquePaths(int m, int n, int i=0, int j=0) {
        if(i==(m-1) && j==(n-1)){
            return 1;
        }
        if(i>=m || j>=n){
            return 0;
        }
        if(dp[i][j]){
            return dp[i][j];
        }
        else{
            return dp[i][j]=uniquePaths(m,n,i+1,j)+uniquePaths(m,n,i,j+1);
        }
    }
};

//-----------------Approach 1-Permutation-------------//
class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=n+m-2; //total position directions
        int r=m-1; // r=n-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};


