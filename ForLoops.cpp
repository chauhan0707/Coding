#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<10;i++)
	cout<<"GFG"<<endl;
	cout<<i;
	return 0;
}
/*
for(int i=0;i<10;i++)
cout<<"GFG";
cout<<i; error as i is defined for the loop. Its scope is only for there.

int i;
for(i=0;i<10;i++)
cout<<"GFG";
cout<<i; 10 will be the output. As the loop terminated when the i become 10 so outside its scope i will be 10.
*/
