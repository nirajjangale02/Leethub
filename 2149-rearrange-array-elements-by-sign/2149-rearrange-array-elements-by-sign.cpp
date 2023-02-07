class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> a;
        queue<int> b;
        int n=nums.size()/2;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                a.push(nums[i]);
            }
            else
                b.push(nums[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(a.front());
            ans.push_back(b.front());
            a.pop();
            b.pop();
        } return ans;
            
    }
};