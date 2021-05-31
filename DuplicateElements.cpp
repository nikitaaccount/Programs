#include<iostream>
using namespace std;

void getdata(int a[],int num);
void duplicate(int a[],int &num);
int display(int a[],int num);

int main()
{
int num;
int a[10];
cout<<"\n Enter the size of array ";
cin>>num;
getdata(a,num);
duplicate(a,num);
display(a,num);
return 0;
}

void getdata(int a[],int num)
{
int i;
cout<<"\n Enter the elements of array";
for(i=0;i<num;i++)
cin>>a[i];
}

void duplicate(int a[],int &num)
{
int i,j,k;
for(i=0;i<num;i++)
{
   for(j=i+1;j<num;)
   {
      if(a[i]==a[j])
      {
       for(k=j;k<num-1;k++)
       {
        a[k]=a[k+1];
       }
       num--;
      } 
	  else 
	    j++;  
   }
}
}

int display(int a[],int num)
{
cout<<"\n Array after removing duplicates ";
int i;
for(i=0;i<num;i++)
cout<<a[i];
}




