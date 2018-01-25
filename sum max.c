#include <stdio.h>
int main()
{
	int numbers[10],num,i,max;
	printf("enter the number in the set (max 10)\t");
	scanf("%d",&num);
	printf("enter the numbers\n");
	for(i=0;i<num;i++)
	scanf("%d",&numbers[i]);
	max=numbers[0];
	for(i=1;i<num;i++)
	if(numbers[i]>max)
	max=numbers[i];
	printf("maxminum number is:%d",max);
	return 0;
}
