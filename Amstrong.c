//9.Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		int rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
		
	}
	if(temp==sum)
	{
		printf("Amstrong");
	}
	else
	printf("Not amstrong");
	return 0;
}

