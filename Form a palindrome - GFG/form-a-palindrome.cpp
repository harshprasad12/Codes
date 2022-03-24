// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
        // code here 
        
        int lcs(string a,string b,int n){
       int dp[n+1][n+1];
       
       for(int i = 0; i <= n; i++){
           for(int j = 0; j <= n; j++){
               if(i == 0 || j == 0) dp[i][j] = 0;
           }
       }
       
       for(int i = 1; i <= n; i++){
           for(int j = 1; j <= n; j++){
               if(a[i-1] == b[j-1]){
                   dp[i][j] = dp[i-1][j-1] + 1;
               }
               else{
                   dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
       
       return (dp[n][n]);
   }

   int findMinInsertions(string S){
       string a = S;
       reverse(S.begin(),S.end());
       string b = S;
       int l = lcs(a,b,a.length());
       return a.length()-l;
   }
        
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends