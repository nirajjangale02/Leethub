class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int l = nums2.size();
        for(int i =0; i<nums1.size(); i++){
            int j =0;            
            //finding nums1[i] element in nums2
            while(nums1[i]!= nums2[j])
                j++;        
            //checking for greater number in nums2[] 
            int c =0;
            for(int k = j; k<nums2.size(); k++){
                if(nums2[j] < nums2[k]){
                    ans.push_back(nums2[k]);
                    c++;
                    break;
            }
            }
			// if there is no number greater than the searching number push -1
               if(c ==0)
                    ans.push_back(-1);
            }
        return ans;
    }
};