// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
         string sr;
        bool flag=true;
        bool chk=true;
        for(int i=0;i<s.length();i++)
        {
            if(!(s[i]=='0' && flag))
            {
                flag=false;
                if(s[i]=='.' && chk)
                sr+=s[i-1];
                sr+=s[i];
                chk=false;
            }
            
            if(s[i]=='.')
            {
                flag=true;
                chk=true;
            }
        }
        if(chk)
        sr+=s[s.length()-1];
        return sr;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends