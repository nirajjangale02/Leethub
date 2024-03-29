//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> ans;
	    for(int i=0;i<nums.size();i++){
	        ans.push_back({nums[i],i});
	    }
	    sort(ans.begin(),ans.end());
	    int count=0;

	    for(int i=0;i<nums.size();i++){
	        pair<int,int> p=ans[i];
	        int value=p.first;
	        int index=p.second;
	        if(i!=index){
	            count++;
	            swap(ans[i],ans[index]);
	            i--;
	        }
	    } return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends