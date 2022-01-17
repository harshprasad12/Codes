// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

struct TrieNode{
    bool isEnd;
    vector<TrieNode*> child;
    
    TrieNode(){
        isEnd = false;
        child.assign(26,nullptr);
    }
};

struct Trie{
    TrieNode* root;
    
    Trie(){
        root = new TrieNode();
    }
    
    void insertStart(string s){
        TrieNode* curr = root;
        for(auto& c:s){
            if(!curr->child[c-'a']){
                curr->child[c-'a'] = new TrieNode();
            }
            curr = curr->child[c-'a'];
        }
        curr->isEnd = true;
    }
    void insertBack(string s){
        TrieNode* curr = root;
        for(int i=s.length()-1;i>=0;i--){
            char c = s[i];
            if(!curr->child[c-'a']){
                curr->child[c-'a'] = new TrieNode();
            }
            curr = curr->child[c-'a'];
        }
        curr->isEnd = true;
    }
};


class Solution{   
  public:
    bool isSubstr(string s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]){
                return false;
            }
        }
        return true;
    }
    bool ok(int N,string arr[],int type){
        Trie trie;
        for(int i=0;i<N;i++){
            string s = arr[i];
            if(type==1)
                reverse(s.begin(),s.end());
            TrieNode* curr = trie.root;
            int l = 0;
            while(l<s.length() and curr->child[s[l]-'a']){
                curr = curr->child[s[l]-'a'];
                l++;
                if(curr->isEnd and isSubstr(s.substr(l))){
                    return true;
                }
            }
            if(type==1)
                trie.insertStart(arr[i]);
            else
                trie.insertBack(arr[i]);
        }
        return false;
    }
    // Function to check if a palindrome pair exists
    bool palindromepair(int N, string arr[]) {
        if(ok(N,arr,1) or ok(N,arr,2)){
            return true;
        }
        reverse(arr,arr+N);
        if(ok(N,arr,1) or ok(N,arr,2)){
            return true;
        }
        return false;
    }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends