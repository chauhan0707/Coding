#include<iostream>
using namespace std;
void print(int i)
{
	cout<<i<<endl;
}
void print(string s)
{
	cout<<s<<" ";
}
int main()
{
	print(10);
	print("GFG");
	return 0;
}

