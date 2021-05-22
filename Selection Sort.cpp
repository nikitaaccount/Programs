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
   void selectionSort();
   void display();
};

template <class T>
void Sorting<T>:: input()
{
  cout<<"\n Elements of the array are :"<<endl;
  for(int i=0;i<n;i++)
  {
    ar[i]=rand();
    cout<<ar[i]<<" ";
  } 
}

template <class T>
void Sorting<T>:: selectionSort()
{
 int temp;
 for(int i=0;i<n-1;i++)
 {
  int min=i;
  for(int j=i+1;j<n;j++)
  {
    if(ar[j]<ar[min])
	  min=j;
  }
  if(min!=i)
  {
    temp=ar[i];
    ar[i]=ar[min];
    ar[min]=temp;
    count++;
  }
  count++;
 }
}

template <class T>
void Sorting<T>:: display()
{
    cout<<"\n\n Sorted Array is : "<<endl;
    for(int i=0;i<n;i++)
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
  for(int i=size;i<500;i+=20)
  {
    ob1.n=i;
    ob1.input();
    ob1.selectionSort();
    ob1.display();
     
    ofstream fout;
    fout.open("SelectionSort.csv",ios::app);
    fout<<ob1.n<<","<<ob1.n*ob1.n<<","<<log2(ob1.n)<<","<<ob1.n*log2(ob1.n)<<","<<ob1.count<<endl;
    fout.close(); 
  }
  return 0;
}











 


