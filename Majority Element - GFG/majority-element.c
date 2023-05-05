//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size){
        int cnt = 0;
        int element;
        
        for(int i=0;i<size;i++){
            if(cnt == 0){
                cnt = 1;
                element = a[i];
            }
            else if(element == a[i]) cnt++;
            else cnt--;
        }
        
        int cntElement = 0;
        for(int i=0;i<size;i++){
            if(a[i] == element) cntElement++;
        }
        if(cntElement > size/2) return element;
        return -1;
    }

//{ Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}

// } Driver Code Ends