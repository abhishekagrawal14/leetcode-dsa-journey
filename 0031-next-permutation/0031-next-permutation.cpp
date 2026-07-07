class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int b = 0 ;
        int count = 0 ;
        for(int i = n-1 ; i>0 ;i--){
            if(nums[i]>nums[i-1]){
                b = i-1 ;
                count++;
                break;
            }  
        }
        if(count == 0 ) {
            reverse(nums.begin(),nums.end());
            return;
        }

        int mini = b+1 ;
        for(int j = b+2 ; j<n ; j++){
            if(nums[j] > nums[b] && nums[j] <= nums[mini]){
                 mini = j;
             }
        }
        swap(nums[b],nums[mini]);
        
        reverse(nums.begin() + b + 1, nums.end());
        
    }
};