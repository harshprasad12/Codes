// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector<int> getLongestPrefixSuffix(string p){
        vector<int> arr(p.length() , 0);
        int i = 0 , j = 1 , l = p.length();
        while(j < l){
            if(p[i] == p[j]){
                arr[j] = arr[i] + 1;
                i++;
                j++;
            }
            else{
                if(i==0) j++;
                else i = arr[i-1];
            }
        }
        return arr;
    }
    public:
    vector <int> search(string pat, string txt)
    {
        vector<int> lps = getLongestPrefixSuffix(pat) , ans;
        int i = 0 , j = 0 , n = txt.length() , m = pat.length();
        while(i < n){
            if(pat[j] == txt[i]){
                i++;
                j++;
            }
            else{
                if (j != 0) j = lps[j - 1];
                else i = i + 1;
            }
            
            if(j == m){
                ans.push_back(i-j+1);
            }
        }
        return ans;
    }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends