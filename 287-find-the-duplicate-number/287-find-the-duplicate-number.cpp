class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size() > 1){
          int  slow = nums[0];
          int  fast = nums[0];
          do{
           slow=nums[slow];
           fast=nums[nums[fast]];
            }
           while(slow != fast);
           fast=nums[0];
           while(fast != slow){
           slow=nums[slow];
           fast=nums[fast];
            }
           return slow;
         }
     return -1;
    }
};