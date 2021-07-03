#include<iostream>
using namespace std;

int add(int x,int y)
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}
void compute(int a,int b,int (*p)(int c,int d))
{
	 cout<< (*p)(a,b);
	 cout<<"\n";
}
int main()
{
	int (*q)(int,int);
	q=&add;
	cout<<"\n Addition is ";
	compute(10,20,q);
	q=&sub;
	cout<<"\n Subtraction is ";
	compute(10,20,q);
	return 0;
}

