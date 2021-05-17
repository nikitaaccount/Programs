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
    int n,count;
    
    Sorting()
    {   
       count=0;
    }
    void input(); 
    void quickSort(int p,int r);
    int partition(int p,int r);
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
int Sorting<T>:: partition(int p,int r)
{
    int x=ar[r];
    int i=p-1;
    int temp;
    for(int j=p;j<=r-1;j++)
	{
		if(ar[j]<=x)
		{
			i=i+1;
		    temp=ar[j];
		    ar[j]=ar[i];
		    ar[i]=temp;
		} 
		count++;
	}	
	temp=ar[i+1];
	ar[i+1]=ar[r];
	ar[r]=temp;
	
	return i+1;
}

template <class T>
void Sorting<T>:: quickSort(int p,int r)
{
   int q;
   if(p<r)
   {
      q=partition(p,r);
      quickSort(p,q-1);
      quickSort(q+1,r);
   }
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
  int size,p,r;
  cout<<"\n Enter the size of the array (from 30 to 1000 with interval of 20): "<<" ";
  cin>>size;
  for(int i=size;i<=1000;i+=20)
  {
    ob1.n=i;
    ob1.input();
    p=1;
    r=ob1.n;
    ob1.quickSort(p,r);
    ob1.display();
     
    ofstream fout;
    fout.open("QuickSort.csv",ios::app);
    fout<<ob1.n<<","<<ob1.n*ob1.n<<","<<log2(ob1.n)<<","<<ob1.n*log2(ob1.n)<<","<<ob1.count<<endl;
    fout.close(); 
  }
  return 0;
}


