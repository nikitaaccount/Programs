
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
    void bubbleSort();
    void display();
};

template <class T>
void Sorting<T>:: input()
{
  cout<<"\n Elements of the array are :"<<endl;
  for(int i=0;i<n;i++)
  {
  	ar[i]=rand()%10;
    cout<<ar[i]<<" ";
  } 
}

template <class T>
void Sorting<T>:: bubbleSort()
{
 int temp,flag=0;
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-1-i;j++)
  {
   if(ar[j]>ar[j+1])
   {
     temp=ar[j];
     ar[j]=ar[j+1];
     ar[j+1]=temp;
	
     flag=1;
     count++;
   }
   count++;
  }
   if(flag==0)
   break;
 }
}


template <class T>
void Sorting<T>:: display()
{
    cout<<"\n\n Sorted Array: "<<endl;
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
    ob1.bubbleSort();
    ob1.display();
     
    ofstream fout;
    fout.open("BubbleSort.csv",ios::app);
    fout<<ob1.n<<","<<ob1.n*ob1.n<<","<<log2(ob1.n)<<","<<ob1.n*log2(ob1.n)<<","<<ob1.count<<endl;
    fout.close(); 
  }
  return 0;
}
 

