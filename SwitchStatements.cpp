#include<iostream>
using namespace std;
int main()
{
	int x_pos=0,y_pos=0;
	char move;
	cin>>move;
	switch(move)
	{
		 case 'L':x_pos--;
		 cout<<x_pos;
		 break;
		 case 'R':x_pos++;
		 cout<<x_pos;
		 break;
		 case 'U':y_pos++;
		 cout<<y_pos;
		 break;
		 case 'D':y_pos--;
		 cout<<y_pos;
		 break;
		 default:cout<<"Invalid Key";
	}
	return 0;
}
