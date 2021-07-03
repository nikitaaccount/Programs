#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("a1.txt");
	fout<<"Hello World";
	cout<<"\n File Created ";
	fout.close();
	return 0;
}

