#include<iostream>
using namespace std;
void printdetails(string f_name,string l_name="")
{
	cout<<f_name<<" ";
	if(l_name!="")
	cout<<l_name<<endl;
}
int main()
{
	printdetails("Ravi","Kumar");
	printdetails("Rajeev");
	return 0;
}
