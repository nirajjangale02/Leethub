//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int temp=0,a;
        priority_queue<int>ans;
        if(l==r){
            return INT_MAX;
        }
        
        for(int i=l;i<r+1;i++){
            ans.push(-arr[i]);
        }
        for(int i=0;i<k;i++){
            a=-ans.top();
            ans.pop();
        } return a;
        // while(!ans.empty() and temp!=k){
        //     a=-(ans.top());
        //     ans.pop();
        //     temp++;
        // } return a;
        
        // priority_queue<int>ans;
        // for(int i=0;i<k;i++){
        //     ans.push(-arr[i]);
        // }
        // for(int i=k;i<r+1;i++){
        //     if(ans.top()>arr[i]){
        //         ans.pop();
        //         ans.push(arr[i]);
        //     }
        // } return -ans.top();
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends