// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        int sum=0;
        int final=((n+1)*n)/2;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+array[i];
        }
        
        return final-sum;
        
        //return res;
    }
};
   /* sort(array.begin(),array.end());
    int temp=array[0];
    for(int i=1;i<array.size();i++)
    {
     ++temp;
     if(temp!=array[i])
     {
     break;
     }
}
return temp;
}*/


/*
#include<bits/stdc++>
using namepace std;


int fn(int a[], int n){
    int sum=n*(n+1)/2;
    int sum_of_ele = 0;
    for(int i=0;i<n;i++){
        sum_of_ele=sum_of_ele + a[i];
    }
    return sum-sum_of_ele;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fn(a,n);
    reutrn 0;
}

*/



// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends