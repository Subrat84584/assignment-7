//7.Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf(" enter two number");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d ",i);
	}
	return 0;
}
