#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=4,y=2;
	cout<<(x+y)<<endl;                    //  + , / , - , * , % 
	cout<<(x-y)<<endl;
	cout<<(x*y)<<endl;
	cout<<(x/y)<<endl;
	int z=x++;
	cout<<z<<" "<<x<<endl;
	z=++x;
	cout<<z<<" "<<x<<endl;
	return 0;
}
/*
z=x++++x; undefined behavior based on compiler
z= x++/x++
z=x++ * ++x;
*/
