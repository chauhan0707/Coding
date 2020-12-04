#include<iostream>
using namespace std;
int main()
{
	int arr1[2]={10,20};
	int arr2[6]={10,20};
	cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<endl; // Output will be  10,20,x=any random value.
    cout<<arr2[0]<<" "<<arr2[1]<<" "<<arr2[2]<<endl; // Out will be 10,20,0.
	return 0;
}
