//4.write the program to calculate HCF of two numbers.
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		printf("%d ",i);
	}
	return 0;
}
