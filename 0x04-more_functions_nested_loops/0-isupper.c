#include<stdio.h>
#include<ctype.h>

int main()
{
	char TestChar;
	printf("\n Check whether a letter is uppercase or not :\n");  
	printf("------------------------------------------------\n");      
	printf(" Input a character : "); 
	scanf( "%c", &TestChar );
	if( isupper(TestChar) )
		printf( " The entered letter is an UPPERCASE letter. \n" );
	else
		printf( " The entered letter is not an UPPERCASE letter. \n" );
	return (0);
}

