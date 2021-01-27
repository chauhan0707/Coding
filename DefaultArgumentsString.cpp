#include<iostream>
using namespace std;
void printdetails(string f_name,string l_name=" ")
{
	cout<<f_name<<" ";
	if(l_name!=" ")cout<<l_name<<endl;
}
int main()
{
	printdetails("Ravi");
	printdetails("Sushil","Singh");
	return 0;
}
/*
void fun();
int main()
{
fun();
}
void fun()
{
cout<<"Hello";
}
Function should be defined and declared before the function call.
