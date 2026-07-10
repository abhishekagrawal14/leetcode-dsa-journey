class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0 , left = 0 ;
        int bottom = m-1 , right = n-1;

        while(top <= bottom && left <= right) {

            // top row
            for(int i = left; i <= right; i++)
                v.push_back(matrix[top][i]);
            top++;

            // right column
            for(int i = top; i <= bottom; i++)
                v.push_back(matrix[i][right]);
            right--;

    // bottom row
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                v.push_back(matrix[bottom][i]);
            bottom--;
    }

    // left column
        if(left <= right) {
                for(int i = bottom; i >= top; i--)
                    v.push_back(matrix[i][left]);
                left++;
        }
}
        return v;
    }
};