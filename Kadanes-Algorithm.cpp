#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
       long long int csum=arr[0];
        long long int osum=arr[0];
        
        for(long long int i=1;i<n;i++)
        {
            if(csum>=0) //if csum is positive than it will be added by previous sum
            csum+=arr[i];
            else if(csum<0) //if csum is negative than it start by own
            csum=arr[i];
            if(csum>osum)   // if csum > overall sum than osum=csum
            osum=csum;
        }
        return osum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends