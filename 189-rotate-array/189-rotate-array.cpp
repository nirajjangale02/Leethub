class Solution {
    void help(vector<int>& nums, int k) {
        k = k%nums.size();
		
        reverse(nums.begin(), nums.end());
		
        reverse(nums.begin(), nums.begin()+k);
		
        reverse(nums.begin()+k, nums.end());
    }
public:
    void rotate(vector<int>& nums, int k) {
        help(nums,k);
    }
};