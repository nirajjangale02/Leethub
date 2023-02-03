class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        queue<int> temp;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else 
                temp.push(nums[i]);
        }
        for(int i=0;i<count;i++){
            temp.push(0);
            
        }
        while(!temp.empty()){
        for(int i=0;i<nums.size();i++){
            nums[i]=temp.front();
        temp.pop();}
        }
             
    }
};