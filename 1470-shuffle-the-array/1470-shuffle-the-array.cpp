class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        queue<int> a;
         vector<int> ans;
        for(int i=0;i<n;i++){
            a.push(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            ans.push_back(a.front());
            ans.push_back(nums[i]);
            a.pop();
            
        } return ans;
    }
};