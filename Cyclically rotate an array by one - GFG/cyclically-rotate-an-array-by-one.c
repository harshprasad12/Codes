// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


void rotate(int a[], int n)
{
  int last=a[n-1];
  
  for(int i=n-1;i>=1;i--){
      a[i]=a[i-1];
  }
  a[0]=last;
}

/*
#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    for(int i=1;i<n-1;i++){
        int arr[i]=arr[i+1];
    }
    int arr[0]=arr[n-1];
}

int main()
{
    //int arr=(1,2,3,4,5)
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr[],n);
}
*/