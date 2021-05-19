#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\n Enter the number ";
	cin>>n;
	
	if(n==0)
        cout<<"\n 0 is neither positive nor negative";
    
	else if(n>0)
	   cout<<"\n The number " <<n <<" is positive ";
	   
	else
	   cout<<"\n The number " <<n <<" is negative ";
}
