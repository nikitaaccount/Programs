#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
	cout<<"\n Enter a  value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	sum+=i;
	}
	cout<<"\n The sum is "<<sum;
}
