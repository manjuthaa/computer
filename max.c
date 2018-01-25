#include <stdio.h>
int main()
{
	int elements[10],num,i,max;
	printf("enter the number in the set (max 10)\t");
	scanf("%d",&num);
	printf("enter the elements:\n");
	for(i=0;i<num;i++)
	scanf("%d",&elements[i]);
	max=elements[0];
	for(i=1;i<num;i++)
	if(elements[i]>max)
	max=elements[i];
	printf("maxminum number is:%d",max);
	return 0;
}
