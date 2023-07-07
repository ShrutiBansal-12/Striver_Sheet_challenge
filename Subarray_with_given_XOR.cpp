int Solution::solve(vector<int> &A, int B) {
    int xr=0; int n=A.size();
    map<int,int>map;
    map[xr]++;
    int cnt=0;
    for(int i=0;i<n;i++){
        xr=xr^A[i];
        int x=xr^B;
        cnt+=map[x];
        map[xr]++;
    }
    return cnt;
}
