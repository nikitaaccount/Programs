#include<iostream>
using namespace std;

template <class T>
class RadixSort
{
	private:
		   T A[20];
		   int n;
	public:
		
	void input();
	int getMax();
	void countingSort(int p);
	void radix();  
	void display();	
};

template <class T>
void RadixSort<T>::input()
{
  cout<<"\n Enter the size of the array ";
  cin>>n;
  cout<<"\n Enter the elements of the array ";
  for(int i=0;i<n;i++)
      cin>>A[i];
}

template <class T>
int RadixSort<T>::getMax()
{
	int max=A[0];
	for(int i=1;i<n;i++)
	    if(max<A[i])
                   max=A[i];
          return max;	  	
}

template <class T>
void RadixSort<T>::countingSort(int p)
{
	int C[10]={0};
	int B[n];
	
	for(int i=0;i<n;i++)
	  C[(A[i]/p)%10]++;
	  
	for(int i=1;i<10;i++)
	  C[i]=C[i]+C[i-1];
	  
	for(int i=n-1;i>=0;i--)
	{
	  B[C[(A[i]/p)%10]-1]=A[i];
	  C[(A[i]/p)%10]--;
	}
	
	for(int i=0;i<n;i++)
	  A[i]=B[i];
	  
}

template <class T>
void RadixSort<T>::radix()
{
	int m=getMax();
	for(int pos=1; m/pos>0; pos*=10)
	   countingSort(pos);
}

template <class T>
void RadixSort<T>::display()
{
  cout<<"\n Elements of the array after Sorting are: ";
  for(int i=0;i<n;i++)
     cout<<A[i]<<" ";
}

int main()
{
	RadixSort<int>r;
	r.input();
	r.radix();
	r.display();
}

 

