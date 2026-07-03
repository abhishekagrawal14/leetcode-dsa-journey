class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ; 
        int ele ;
        for(int i = 0 ; i <nums.size() ; i++){
            if(cnt==0){
                cnt =1 ;
                ele = nums[i];
            }
            else if (nums[i] == ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt_1 = 0 ;
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i] == ele) cnt_1++;
        }
        if(cnt_1>nums.size()/2) return ele;
        else return -1;
    }
};