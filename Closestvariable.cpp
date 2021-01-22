#include<iostream>
using namespace std;
int x;	
int main()
{
    int x=10;
    {
	int x=20;
	cout<<x;
	}
	return 0;
}
