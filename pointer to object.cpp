#include<iostream>
using namespace std;

const int size =2;

class item
{
	int a,b;
	
	public:
		void getData(int x,int y);
		void display();
};

void item::getData(int x,int y)
{
	a=x;
	b=y;
}
void item::display()
{
	cout<<"\n a: "<<a;
	cout<<"\n b: "<<b;
}

int main()
{
	item *p =new item[size];
	item *q=p;
	int r,s;
	for(int i=0;i<size;i++)
	{
		cout<<"\n Input data for item "<<i+1<<" ";
		cin>>r>>s;
		p->getData(r,s);
		p++;
	}
	for(int i=0;i<size;i++)
	{
		cout<<"\n Item "<<i+1;
	    q->display();
	    q++;
	}  	
}
