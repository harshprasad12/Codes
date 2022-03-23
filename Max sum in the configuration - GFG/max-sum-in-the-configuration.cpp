// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int arr[],int n)
{
    int old = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        old += i*arr[i];
        sum += arr[i];
    }
    int ans = 0;
    int sufsum = 0;
    for(int i=1;i<=n;i++){
        sufsum += arr[n-i];
        ans = max(ans,(i*(sum-sufsum)- (n-i)*sufsum));
    }
    return old+ans;
}