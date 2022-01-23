// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         sort(arr, arr+n);  //O(nlogn)
       vector<int> v;
       int num=INT_MIN;
       for(int i = 1; i < n; i++){    // theta(n)
           if(arr[i] == arr[i-1] && num!=arr[i]){
           num = arr[i];
           v.push_back(arr[i]);
       }
       }
       if(v.empty()){
           v.push_back(-1);
       }
       return v;
       
    }
};


/*
for(int i=0;i<n;i++){
    int j=i+1;
    if(arr[i]==arr[j){
        v.push_back(arr[i]);
        j++;
    }
    else if(v.size()==0)
    {
        v.push_back(-1);
    }
}
*/


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends