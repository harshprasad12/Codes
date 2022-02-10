// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int count=1;
        sort(arr,arr+n);
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]==count){
                count++;
            }
        }
        
        arr[1]=count;
        for(auto it: m){
            if(it.second>=2){
                arr[0]=it.first;
            }
        }
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends