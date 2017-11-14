//program of add digits
#include<stdio.h>
int main()
{
int n,sum=0,remainder;
printf("Enter an integer\n");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
sum=sum+remainder;
n=n/10;
}
printf("sum of digits of enterad number=%d\n",sum);
return 0;
}
/*********out*********
Enter an integer
5
sum of digits of enterad number=5
dell@dell-OptiPlex-7040:~$*/ 

