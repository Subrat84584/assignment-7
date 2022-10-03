//2.Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
     int nTerm,t1=0,t2=1,next,i;
	 printf("enter the value of n term");
	 scanf("%d",&nTerm);
	 printf("%d %d ",t1,t2);
	 next=t1+t2;
	 for(i=3;i<=nTerm;i++)
	 {
	 	printf("%d ",next);
	 	t1=t2;
	 	t2=next;
	 	next=t1+t2;
	 }
	 return 0;
	 
	 	
}
