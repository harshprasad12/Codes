// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
        int final=((n+1)*n)/2;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+array[i];
        }
        
        return final-sum;
        //return res;
    }
};
   /* sort(array.begin(),array.end());
    int temp=array[0];
    for(int i=1;i<array.size();i++)
    {
     ++temp;
     if(temp!=array[i])
     {
     break;
     }
}
return temp;
}*/

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends