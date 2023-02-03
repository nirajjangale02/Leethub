class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ans;
        int a;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]]==1){
                a=nums[i];
            }
        } return a;
    }
};