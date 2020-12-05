#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Table of entered number upto which number: ";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
	cout<<n*i<<endl;
	}
	return 0;
}
