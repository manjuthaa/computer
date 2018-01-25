#include <stdio.h>
int main()
{
char string[200];
int i=0;

gets(string);
while(string[i]!='\0')
{
	if((string[i]=='0'||string[i]<='9')&& (string[i]=='a'||string[i]=='z'))
{
	printf("yes");
}
	else
	{
		printf("no ");
	}
}

return 0;
}
