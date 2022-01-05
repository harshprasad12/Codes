// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int n)
    {
    	//code here.
    int max1=-1;
    	int max2=-1;
    	
    	for(int i=0;i<n;i++){
    	    int temp=max1;
    	    if(arr[i]>max1)
    	   {  
    	       max1=arr[i];
    	       max2=temp;
    	       
    	   }
    	   else if(arr[i]>max2){
    	      if(arr[i]!=max1){
    	          max2=arr[i];
    	      }
    	   }
    	}
    	return max2;
}
    

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends