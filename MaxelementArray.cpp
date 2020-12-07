#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,100,40,50,500,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		res=max(res,arr[i]);
	
	}
		cout<<res<<" ";
	return 0;
}
