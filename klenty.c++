
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;  cin>>n;
	int arr[n];
	int index=0;

	for(int i=0;i<n;i++)  cin>>arr[i];

	bool flag=-1;		
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]<arr[i+1]) continue;
		sum=arr[i]+arr[i+1];
		if((i+2)<n)
		if(sum==arr[i+2]) { index=i;break;flag=0;}
		else {
			arr[i+1]=sum;
		}
	}
	if(flag==-1) 
	{
		for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
	}
	else if(flag==0){
		for(int i=index;i<n;i++)  cout<<arr[i]<<" ";
	
	}
	else 
		cout<<sum<<endl;

	
	return 0;
}
