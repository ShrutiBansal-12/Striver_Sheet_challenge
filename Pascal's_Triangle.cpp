class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for(int i=0;i<numRows;i++){
            vector<int> in;
            in.push_back(1);
            int cols=i;
            int j=1;
            for(j;j<cols;j++){
                int x=mat[i-1][j-1]+mat[i-1][j];
                in.push_back(x);
            }
            if(i!=0){
                in.push_back(1);
            }
            mat.push_back(in);
        }
        return mat;  
    }
};
