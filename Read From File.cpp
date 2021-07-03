#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("a1.txt");
	char ch;
	fin>>ch; // or ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		fin>>ch;  // ch=fin.get();
	}
	fin.close();
	return 0;
}

