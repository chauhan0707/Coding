#include<iostream>
using namespace std;
int mymax(int a,int b)
{
	if(a>b)
	return a;
	return b;
}
int main()
{
	cout<<mymax(10,20)<<endl<<mymax(40,50);
}
