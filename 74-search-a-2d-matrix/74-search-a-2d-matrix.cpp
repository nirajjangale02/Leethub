class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        stack<int> ans;
        int temp=0;
        int row= matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans.push(matrix[i][j]);
            }
        }
        while(!ans.empty()){
            temp=ans.top();
            if(temp==target){
            return 1;
            
        }
            ans.pop();
        }
        
        return 0;
        
    } 
};