#include <stdio.h>
int main()
{
char string[200];
int count=0,i=0;

gets(string);
while(string[i]!='\0')
{
	if(string[i]=='0'||string[i]<='9' )
	++count;
	i++;

}
printf("numbers:%d",count);

return 0;
}
