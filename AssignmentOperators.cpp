#include<iostream>
using namespace std;
int main()
{
	int x=10,y;
	y=x;
	y=x=20;
	cout<<y<<" "<<x<<endl;
	x+=10;
	cout<<x<<endl;
	x+=10+2;
	cout<<x<<endl;
	return 0;
}
/*
+= ,-= , *= , /=, %= , &= , |= , <<= ,>>=
*/
