class Solution {
public:
    int trap(vector<int>& arr) {
        
        int n=arr.size();
        int left[n],right[n];
        // int n=left.size();
        // int m=right.size();
        int ans=0;
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]=max(arr[i],left[i-1]);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(arr[i],right[i+1]);
        }
        for(int i=0;i<n;i++){
            ans+=(min(left[i],right[i])-arr[i]);
        } return ans;
    }
};