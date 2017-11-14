//program of add n numbers
#include<stdio.h>
int main()
{
int n,sum=0,c,value;
printf("Enter the number of integer you want to add\n");
scanf("%d",&n);
printf("Enter%dintegers\n",n);
for(c=1;c<=n;c++)
{scanf("%d",&value);
sum=sum+value;
}
printf("sum of entered integers=%d\n",sum);
return 0;
}
/****************out********
Enter the number of integer you want to add
5
Enter5integers
1 2 3 4 5
sum of entered integers=15
dell@dell-OptiPlex-7040:~$ */

