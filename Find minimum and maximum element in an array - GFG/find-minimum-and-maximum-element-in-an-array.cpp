// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<int,int>k;
    sort(a,a+n);
    //cout<<a[0]<<endl;
    //cout<<a[n-1]<<endl;
    k.first=a[0];
    k.second=a[n-1];
    return k;
}

/*

#include<bits/stdc++>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    cout<<mini<<endl;
    cout<<maxi<<endl;
    return 0;
}

*/

