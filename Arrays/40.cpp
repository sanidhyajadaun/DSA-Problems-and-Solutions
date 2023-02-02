class Solution {
public:
    void sortDiagonal(vector<vector<int>>&mat,int i,int j,int r,int c){
        vector<int>temp;
        int p=i,q=j;
        while(p<r && q<c){
            temp.push_back(mat[p][q]);
            p++;
            q++;
        }
        sort(temp.begin(),temp.end());
        int k=0;
        while(i<r && j<c){
            mat[i][j]=temp[k];
            i++;
            j++;
            k++;
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows=mat.size(),cols=mat[0].size();
        if(rows==1||cols==1)return mat;
        for(int i=0;i<cols;i++){
            sortDiagonal(mat,0,i,rows,cols);
        }
        for(int i=1;i<rows;i++){
            sortDiagonal(mat,i,0,rows,cols);
        }
        return mat;
        
    }
};