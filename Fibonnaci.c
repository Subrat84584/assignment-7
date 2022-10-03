//1.write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
     int n,t1=0,t2=1,t3,i;
     printf("enter your nth term");
     scanf("%d",&n);
     if(n<0)
     {
     	printf("this is invalid");
	 }
	 else
	   if(n==1)
	     printf("%d",t1);
	     else
	     if(n==2)
	     printf("%d",t2);
	     else
	     for(i=3;i<=n;i++)
	     {
	     	t3=t1+t2;
	     	t1=t2;
	     	t2=t3;
		 }
		 printf("your term is:%d",t3);
		return 0;
}
