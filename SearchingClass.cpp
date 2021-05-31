/*Write a menu driven program of  Searching algorithms (Binary Search and Linear Search ) 
using classes and templates.*/

#include<iostream>
using namespace std;

template <class t>
class Searching
{  
    private:
         t ar[10];
         int n,x;
 
    public:
	void input();
	int binarySearch();
	int linearSearch();

};

template <class t>
void Searching<t>:: input()
{
cout<<"\n Enter the size of the array: ";
cin>>n;
cout<<"\n Enter the elements of the array: "<<endl;
for(int i=0;i<n;i++)
cin>>ar[i];
cout<<"\n Enter the element to search: "<<endl;
cin>>x;
}

template <class t>
int Searching<t>:: binarySearch()
{
	int first=0;
	int last=n-1;
	while(first<=last)
	{
		int mid=(first+last)/2;
		if(ar[mid]==x)
		  return mid;
		else if (x>ar[mid])
		    first=mid+1;
		else
		    last=mid-1;	    
	}
	return -1;
}

template <class t>
int Searching<t>:: linearSearch()
{
	for(int i=0;i<n;i++)
	{
		if(x==ar[i])
		  return i;    
	}
	return -1;	    
}

int main()
{
Searching <int> o1;
o1.input();
int s,a,b;
char ch='y';

do
{ 
  cout<<"\n 1.Binary Search "<<endl;
  cout<<"\n 2.Linear Search "<<endl;
  cout<<"\n Enter your choice "<<endl;
  cin>>s;
  switch(s)
  { 
    case 1:  a=o1.binarySearch();
	         if(a!=-1)  
	              cout<<"\n Element Found at "<<a+1;
	         else
		          cout<<"\n Element not Found ";
	         break;
			 
   case 2:  b=o1.linearSearch();
	         if(b!=-1)  
	              cout<<"\n Element Found  at "<<b+1;
	        else
		    cout<<"\n Element not Found ";
	         break;	
   }
   
cout<<"\n Do you want to continue ";
cin>>ch;
}while(ch=='y');
return 0;
}





 

