//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int n, int k, int arr[])
    {
         int frequency[1000] = {0}; 
         for (int i = 0; i < n; ++i) {
        // Update the frequency of the current element
        frequency[arr[i]]++;

        // Check if the current element has occurred at least k times
        if (frequency[arr[i]] == k) {
            return arr[i]; // Return the first element that meets the condition
        }
    }

    return -1; // 
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends