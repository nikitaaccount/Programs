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
    void mergeSort(int p,int r);
    void merge(int p,int q,int r);
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
void Sorting<T>:: merge(int p,int q,int r)
{
   int i,j;
   int n1=q-p+1;
   int n2=r-q;
   T L[Max],R[Max];
   
   for(i=1;i<=n1;i++)
     L[i]=ar[p+i-1];
     
   for(j=1;j<=n2;j++)
     R[j]=ar[q+j];
     
   L[n1+1]=Max;
   R[n2+1]=Max;
   i=j=1;
   
   for(int k=p;k<=r;k++)
   {
   	  if(L[i]<=R[j])
   	  {
   	  	ar[k]=L[i];
   	  	i++;
	  }
	  else
	  {
	  	ar[k]=R[j];
   	  	j++;
	  }
	count++;
   }
}

template <class T>
void Sorting<T>:: mergeSort(int p,int r)
{
   if(p<r)
   {
      int q=(p+r)/2;
      mergeSort(p,q);
      mergeSort(q+1,r);
      merge(p,q,r);
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
  int size;
  cout<<"\n Enter the size of the array (from 30 to 1000 with interval of 20): "<<" ";
  cin>>size;
  for(int i=size;i<=1000;i+=20)
  {
    ob1.n=i;
    ob1.input();
    int p=1;
    int r=ob1.n;
    ob1.mergeSort(p,r);
    ob1.display();
    
    ofstream fout;
    fout.open("MergeSort1.csv",ios::app);
    fout<<ob1.n<<","<<ob1.n*ob1.n<<","<<log2(ob1.n)<<","<<ob1.n*log2(ob1.n)<<","<<ob1.count<<endl;
 fout.close(); 

  }
  return 0;
}

 



