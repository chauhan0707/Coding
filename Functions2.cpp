#include<iostream>
using namespace std;
void fun1()
{
	cout<<"Inside fun1 ";
}
void fun2()
{
	cout<<"fun2 begins ";
	fun1();
	cout<<"fun2 ends ";
}
int main()
{
	cout<<"main begins ";
	fun2();
	cout<<"main ends ";
	return 0;
}
