#include<iostream>
using namespace std;
int main()
{
	char x;                  // 1 byte = 8 bits
	cout<<sizeof(x)<<endl;  // -128 to 127 or - 2^7 to 2^7-1 
	
	unsigned char c;      // 0 to 255 or 0 to 2^8-1
	cout<<sizeof(c)<<endl;
	
    bool e;                 // 1 byte = 8 bits
	cout<<sizeof(e)<<endl;
	
	short int y;           // 2 bytes= 16 bits
	cout<<sizeof(y)<<endl; // -2^15 to 2^15 - 1 
	
	int z; // 4 bytes = 32 bits
	cout<<sizeof(z)<<endl; // -2^31 to 2^31 - 1
	
	unsigned int i; // 0 to 2^32 - 1 
	cout<<sizeof(i)<<endl;
	 
	float a;  // 4 bytes = 32 bits
	cout<<sizeof(a)<<endl; // -2^31 to 2^31 - 1
	
	long int b; // 4 bytes = 32 bits
	cout<<sizeof(b)<<endl; // -2^31 to 2^31 - 1
	
	long long int c; // 8 bytes= 64 bits
	cout<<sizeof(c)<<endl; // -2^63 to 2^63 - 1
	
	double d;   // 8 bytes= 64 bits
	cout<<sizeof(d)<<endl; // -2^63 to 2^63 - 1
	
	return 0;
	
}
/* sizeof() is used to check the size of primitive data types. We can either use it directly like sizeof(int) 
or int i; sizeof(i); */ 
