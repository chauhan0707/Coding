#include<iostream>
using namespace std;
void fun()
{
	static int x=1;  // If we use static value will keep changing the output will be 2 3 4.
	x++;
	cout<<x<<endl;
	
}
int main()
{
	fun();
	fun();
	fun();
	return 0;
}
