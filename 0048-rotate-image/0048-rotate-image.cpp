class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size(); // rows 
        int n = matrix[0].size(); // columns 
        

        //  brute force used tc = O(n2) and sc = O(n2).
        
        vector<vector<int>> result(n, vector<int>(m));
        for(int i = 0 ; i< m ; i++){
            for(int j = 0 ; j<n ; j++){
                result[j][m-1-i] = matrix[i][j];
            } 
        }
        matrix = result ;
    }
};