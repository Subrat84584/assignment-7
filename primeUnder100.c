//6.write a program to print all prime numbers under 100.
#include<stdio.h>
int main()
{
	int n,i,count;
	for(n=1;n<=100;n++)
	{
	count=0;
     for(i=1;i<=n;i++)
      { 
     	if(n%i==0)
     	count++;
	  }
	  if(count==2)
	 printf("%d ",n);
    }
	 return 0;
}

