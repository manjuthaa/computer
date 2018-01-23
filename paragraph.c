#include <stdio.h>
int main()
{
char string[200];
int count=0,i=0;

gets(string);
while(string[i]!='\0')
{
	if(string[i]=='.' )
	count++;
	i++;

}
printf("number of paragraph:%d",count);

return 0;
}
