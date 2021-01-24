#include<iostream>
using namespace std;
int main()
{
	static int x=2;
	x=x+1;
	cout<<x<<endl;
	const float pi=3.14;
	cout<<pi;
	return 0;
	/* const is useful doing mathematical or scientfic problems where constants have fixed value. If we try to change them it 
	 will give error. So static are default like normal variable that we can change. Its value is not fixed.*/
}
