#include <stdio.h>
int prime(int no);
int main()
{
	int num;
	scanf("%d",&num);
	if(num/1==0)
	printf("number is  prime\n");
	else
	printf("number is  not prime\n");
}
int prime(int no)
{
	int i;
	for(i=2;i<no;i++)
	if(no%i==0)
	return 0;
	return 1;
}
