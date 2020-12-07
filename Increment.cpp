#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int z=x++;
	cout<<z<<" "<<x<<endl;
	z=++x;
	cout<<z<<" "<<x;
}
