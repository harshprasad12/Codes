// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        //int n=S1.length()+S2.length();
        string S3=S1+S2;
        int m=S3.length();
        //cout<<S3;
        for(int i=S3.length()-1;i>=0;i--){
            cout<<S3[i];
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}
  // } Driver Code Ends