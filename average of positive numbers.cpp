#include<iostream>
using namespace std;

int main()
{
 int n,i=0;
 float num,sum=0.0;
 float avg;
 
 cout<<"\n Enter integer: ";
 cin>>n;
 
 cout<<"\n Enter "<<n<<" number";
 while(i<n)
 {
 cin>>num;
 if(num>=0.0)
   sum=sum+num;
 i++;
 }
 
 cout<<"\n The Sum is: "<<sum<<"\n";
 avg=sum/n;
 cout<<"\n The Average is: "<<avg;
 return 0;
} 
   
 

