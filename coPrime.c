//5.write a program to check whether two given numbers are co-prime number or not.
#include<stdio.h>
int main()
{
	int a,b,i,count=0;
	printf("enter given number");
	scanf("%d %d",&a,&b);
    for(i=2;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		count++;
		break;
		}
		if(count==0)
		printf("These number are co prime");
		else
		printf("These number are not co prime");
			
		return 0;
}
