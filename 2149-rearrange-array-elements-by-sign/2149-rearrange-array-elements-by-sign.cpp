class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int positive = 0 , negatives = 1 ;
        for(int i = 0 ; i<n ;i++){
            if(nums[i]>0){
                v[positive] = nums[i];
                positive+=2;
            }
            else {
                v[negatives]=nums[i];
                negatives+=2;
            }
        }
        return v ;
    }
};