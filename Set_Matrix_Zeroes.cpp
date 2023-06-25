class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> out;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    vector<int> in;
                    in.push_back(i);
                    in.push_back(j);
                    out.push_back(in);
                }
            }
        }
        int size=out.size();      //size=2  //{{0,0},{0,3}
        for(int l=0;l<size;l++){  //l=0   out[1]={0,3}
            int x=out[l][0];      //x=out[0][0]=0
            int y=out[l][1];      //y=out[0][1]=3
            for(int k1=0;k1<cols;k1++){
                matrix[x][k1]=0;
            }
            for(int k2=0;k2<rows;k2++){
                matrix[k2][y]=0;
            }
        } 
    }
};
