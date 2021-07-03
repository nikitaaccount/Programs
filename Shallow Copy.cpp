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
