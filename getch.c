#include<stdio.h>
#include<conio.h>

// getch to display the hidden input

int main()
{
  char a[5];
  printf("\n Enter Your Password ");
  
  int i;
  for(i=0;i<4;i++)
  {
  	 a[i]=getch();
     printf("*");	
  }
  a[i]='\0';
  printf("\n");
  
  printf(" Entered Password ");
  for(i=0;a[i]!='\0';i++)
  printf("%c",a[i]);
  
  getch();
  return 0;
}
