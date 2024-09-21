class Solution {
public:
     void mark_row(int i,vector<vector<int>>& matrix){
         int m = matrix[0].size();
           for(int j=0;j<m;j++){
                if(matrix[i][j]!=0)
                  matrix[i][j] = -1;
            }
          }

         void mark_column(int j,vector<vector<int>>& matrix){
            int n = matrix.size();
            for(int i=0;i<n;i++){
                if(matrix[i][j]!=0)
                  matrix[i][j]=-1;
            }
         }

    void setZeroes(vector<vector<int>>& matrix) {
         
         
         int n = matrix.size();
         int m = matrix[0].size();

        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    mark_row(i,matrix);
                    mark_column(j,matrix);
                }
            }
         }

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]== -1){
                    matrix[i][j]=0;
                }
            }
         }
    }
};
