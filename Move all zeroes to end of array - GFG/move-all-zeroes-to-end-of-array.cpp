//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int nums[], int n) {
	    
	    // code here
	     int count=0;
         queue<int> temp;
        
        for(int i=0;i<n;i++){
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
        for(int i=0;i<n;i++){
        nums[i]=temp.front();
        temp.pop();}
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends