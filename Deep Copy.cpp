// In this we explicitly create copy constructor so that pointer of new object points to 
// new memory location and not to the location which earlier object pointer points to

#include<iostream>
using namespace std;

class Dummy
{
	private:
		int a,b,*p;
	public:
		Dummy()
		{
			p=new int;
		}
		Dummy(Dummy &d) // copy constructor
		{
			a=d.a; 
			b=d.b;
			p=new int;
			*p = *(d.p);
		}
		void setData(int x,int y,int z)
		{
			a=x;
			b=y;
			*p=z;
		}
		void getData()
		{
			cout<<a<<" "<<b<<" "<<*p<<"\n";
		}
};

int main()
{
	Dummy o1,o2;
	o1.setData(3,4,5);
	o2=o1;
	o2.getData();
    return 0;	
}
