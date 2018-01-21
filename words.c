#include <stdio.h>

int main(void) {
	char string[90],ch;
	int count=1,i=0;
	printf("enter a string:\n");
	gets (string);
	while(string[i]!='\0')
	{
		if(string[i]==' '||string[i]==' \n'||string[i]==' \t')
		count++;
		i++;
			}
			printf("number of words in a string%d",count);
			return 0;
}
