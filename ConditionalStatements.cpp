#include<iostream>
using namespace std;
int main()
{
	int age;
    char gender;
    cout<<"Enter age: \n";
    cin>>age;
    cout<<"Enter gender M or F: \n";
    cin>>gender;
    if(gender=='M')
    {
    	cout<<"Male ";
		if(age>=18)
		{
			cout<<"Adult";
		}
		else
		{
			cout<<"Kid";
		}
	}
	else if(gender=='F')
	{
		cout<<"Female ";
		if(age>=18)
		{
			cout<<"Adult";
		}
		else
		{
			cout<<"Kid";
		}
	}
	else
	{
		cout<<"Other";
	}
    
	return 0;
}
