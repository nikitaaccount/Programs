#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("\n Enter two numbers ");
	scanf("%d %d",&a,&b);
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("\n a= %d and b= %d",a,b);
	
	return 0;
}
