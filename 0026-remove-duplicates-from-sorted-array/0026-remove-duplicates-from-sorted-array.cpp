class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        int i=0;
        // for(int i=0;i<nums.size();i++){
        //     ans.insert(nums[i]);
        // }
         for(auto it:nums){
             ans.insert(it);
         }
        for(int a:ans){
            nums[i++] = a;
        }
        
        return ans.size();
        
    }
};