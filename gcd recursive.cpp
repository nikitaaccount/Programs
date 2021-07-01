// Recursive function : GCD hence LCM
// a,b   a*b=GCD*LCM

#include<iostream>
using namespace std;

int gcd(int,int);  
int main()
{
	int a,b,p,q;
	cout<<" Enter two integers : ";
	cin>>a>>b;
	p=gcd(a,b);
	cout<<" GCD of "<<a<<" and "<<b<<" is "<<p;
	q=a*b/p;
	cout<<"\n LCM of "<<a<<" and "<<b<<" is "<<q;
	
	return 0;
}

int gcd(int a,int b)
{
	int r;
	r=a%b;
	if(r==0)
	  return b;
	else
	  return gcd(b,r) ; 
}
