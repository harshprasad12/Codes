// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string a[], int n)
    {
        // code here
        string res;
        int leng=101;
        // sort the string array
        sort(a,a+n);
        string s=a[n-1];
        //now get the greater string and apply that on the whole array to compare it from
        for(int i=0;i<n-1;i++)
        {
            int count=0;
            for(int j=0;j<a[i].length();j++)
            {
                if(a[i][j]!=s[j])
                    break;
                count++;
            }
            if(leng>count)
                leng=count;
        }
        // cout<<leng<<endl;
        if(leng==0)
            return "-1";
        return s.substr(0,leng);
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
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends