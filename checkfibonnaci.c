//3.Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
	int n,t1=0,t2=1,t3,i;
	printf("enter your number to check is it fibonnaci or not");
	scanf("%d",&n);
	if(n==t1)
	printf("yes it is fibonnaci number");
	t3=t1+t2;
	while(t3<n)
	{
		t1=t2;
		t2=t3;
		t3=t1+t2;
	}
	if(t3==n)
	printf("fibonnaci number");
	else
	printf("not a fibonnaci number");
	return 0;
}

