class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int startingRow=0;
        int col=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
      reverse(matrix[i].begin(),matrix[i].end());
  }
        
    }
};