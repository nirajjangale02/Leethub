class Solution {
public:
    static bool comp(string a, string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(to_string(nums[i]));
        }
        sort(ans.begin(),ans.end(),comp);
        if(ans[0]=="0"){
            return "0";
        }
        string finalAns="";
        for(int i=0;i<nums.size();i++){
            finalAns+=ans[i];
        } return finalAns;
    
        
    }
};