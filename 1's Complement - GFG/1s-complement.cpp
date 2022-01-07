// { Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
  
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
         string str(S);
       for(int i=0; i<=N-1; i++){
           if(str.at(i)=='0'){
               str.at(i)='1';
           }else if(str.at(i)=='1'){
               str.at(i)='0';
           }
       }
       return str;
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}  // } Driver Code Ends