// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    // Complete the function
    
    int res[n];
    
    for(int i=0;i<n;i++){
        res[i]=arr[i];
    }
    
    sort(res,res+n);
    
    unordered_map<int,int>m;
    
    for(int i=0;i<n-1;i++){
        m[res[i]]=res[i+1];
    }
    m[res[n-1]]=-10000000;
    
    for(int i=0;i<n;i++){
        arr[i]=m[arr[i]];
    }
    
    return arr;
    
}
