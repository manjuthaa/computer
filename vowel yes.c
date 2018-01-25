#include <stdio.h>

int main()
{
	char c;
	int a,b;
	printf("enter the alp\n");
	scanf("%c",&c);
	a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(a||b)
	printf("%c yes",c);
	else
	printf("%c no",c);
	return 0;
}
