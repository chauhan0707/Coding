#include<iostream>
using namespace std;
int main()
{
	 int age;
	 char gender;
	 cout<<"Enter age: ";
	 cin>>age;
	 cout<<"Enter gender as M or F: ";
	 cin>>gender;
	 if(gender=='M')
	 {
	 	cout<<"Male ";
	 	if(age<18)
	 	{
	 		cout<<"Kid";
	 		
		 }
		 else{
		 
		 
		 	cout<<"Adult";
	}
	 }
	 else
	 {
	 	cout<<"Female ";
	 	if(age<18)
	 	{
	 		cout<<"Kid";
		 }
		 else
		 {
		 	cout<<"Adult";
		 }
	 }
	 return 0;
}
