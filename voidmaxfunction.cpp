#include<iostream>
using namespace std;
void findgreater(int x,int y)
{
	if(x>y)
	{
		cout<<x<<" is greater"<<endl;
		return;
		
	}
	
	
	cout<<y<<" is greater"<<endl;
}
int main()
{
	findgreater(10,20);
	findgreater(20,10);
	return 0;
}
