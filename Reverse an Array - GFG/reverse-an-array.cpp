#include <iostream>
using namespace std;

int main() {
	//code
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(long long i=n-1;i>=0;i--){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}