#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=10;i++)
	{
		float x,y;
		cout<<"Enter the numbers: ";
		cin>>x>>y;
		if(y==0){
		
			cout<<"Invalid"<<endl;
			continue;
	}
	
		cout<<x/y<<" "<<endl; 
	}
	return 0;
}
