#include<stdio.h>

// checking for vowel
int main()
{
	char ch;
    printf("\n Enter the character ");
    scanf("%c", &ch);
    switch(ch)
    {
      case 'a': 
      case 'e': 
      case 'i':
      case 'o':
      case 'u':
    	       printf("\n  %c is vowel ",ch);	
			   break;         
      default : 
    		   printf("\n %c is not vowel ",ch);
    	
	}
	return 0;
}
