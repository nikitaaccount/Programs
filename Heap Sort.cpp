#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

const int Max=1000;

template <class T>
class Sorting
{  
  public:
    T ar[Max];
    int n,heap_size,count;
    
    Sorting()
    {   
       count=0;
    }
    void input(); 
    void maxHeapify(int i);
    void build_maxheap();
    int heapSort();
    int left(int i);
    int right(int i);
    void display();
};

template <class T>
void Sorting<T>:: input()
{
  cout<<"\n\n Elements of the array are :"<<endl;
  for(int i=1;i<=n;i++)
  {
    ar[i]=rand()%10;
    cout<<ar[i]<<" ";
  } 
}
template <class T>
int Sorting<T>::left(int i)
{
	return(i*2);
}

template <class T>
int Sorting<T>::right(int i)
{
	return((i*2)+1);
}

template <class T>
void Sorting<T>::maxHeapify(int i)
{
	int l,r,largest,temp;
	l=left(i);
	r=right(i);
	if(l<=heap_size && ar[l]>ar[i])
	   largest=l;
	else
	   largest=i;
	count++;
	
	if(r<=heap_size && ar[r]>ar[largest])
	    largest=r;
	count++;
	    
	if(largest!=i)
	{
	   temp=ar[i];
	   ar[i]=ar[largest];
	   ar[largest]=temp;
	   maxHeapify(largest);
	}
	   
}
template <class T>
void Sorting<T>:: build_maxheap()
{
   for(int i=n/2;i>=1;i--)
     maxHeapify(i);
}
template <class T>
int Sorting<T>:: heapSort()
{
   int temp;
   build_maxheap();
   for(int i=n;i>=2;i--)
   {
   	  temp=ar[1];
   	  ar[1]=ar[i];
   	  ar[i]=temp;
	  
   	  heap_size=heap_size-1;
   	  maxHeapify(1);
   }
   return count;  
}

template <class T>
void Sorting<T>:: display()
{
    cout<<"\n\n Sorted Array: "<<endl;
    for(int i=1;i<=n;i++)
    {
       cout<<ar[i];
       cout<<" ";
    }
}

int main()
{
  Sorting<int>ob1;
  int size,c;
  cout<<"\n Enter the size of the array (from 30 to 1000 with interval of 20): "<<" ";
  cin>>size;
  for(int i=size;i<=1000;i+=20)
  {
    ob1.n=i;
    ob1.heap_size=i;
    ob1.input();
    c=ob1.heapSort();
    ob1.display();
     
    ofstream fout;
    fout.open("HeapSort.csv",ios::app);
    fout<<ob1.n<<","<<ob1.n*ob1.n<<","<<log2(ob1.n)<<","<<ob1.n*log2(ob1.n)<<","<<c<<endl;
    fout.close(); 
  }
  return 0;
}

 



