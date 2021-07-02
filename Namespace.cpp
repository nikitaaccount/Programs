#include<iostream>
using namespace std;

namespace myspace
{
	int a;
	void fun();
	class test
	{
	 public:
		void testfun();
	};
}
void myspace::fun()
{
	cout<<"\n Namespace Function ";
}
void myspace::test::testfun()
{
	cout<<"\n Function of Class inside namespace ";
}
using namespace myspace;

int main()
{
	a=9;
	cout<<"\n Value of a in namespace is "<<a;
	fun();
	test t1;
	t1.testfun();
	return 0;
}
