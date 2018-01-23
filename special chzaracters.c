
#include <stdio.h>
int main()
{
char string[200];
int count=0,i=0;

gets(string);
while(string[i]!='\0')
{
	if(string[i]=='.'||string[i]<='1'||string[i]==','||string[i]==';' )
	count++;
	i++;

}
printf("number of special characters:%d",count);

return 0;
}
