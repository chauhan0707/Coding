#include<iostream>
using namespace std;
int main()
{
	int x=1,y=2,z=3;
	// x+y=z; Wrong
	z=x+y; // Right
	return 0;
}
/*
1) Syntax Error = ; and { } and cout<<x;without defining x.
2) Semantic Error = When the line doesn't make any sense 16=x; x should be on LHS.
3) Linker Error = If we are calling a function and its definition is not present.
4) Runtime Error = When we run the program, it is more dangerous than compile time error. For eg: x/y,y=0;
5) Logical Error = x+y/2; it should be (x+y)/2 and if(x=y); it should be if(x==y)
6) Compiletime Error = 1) & 2)
