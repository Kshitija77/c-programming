//program of swap two numbers without 3rd variable
#include<stdio.h>
int main()
{
int a,b;
printf("\nEnter value for num1 & num2:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping value of a:%d",a);
printf("\nAfter swapping value of b:%d",b);
return(0);
}
/****out******
Enter value for num1 & num2:3 4

After swapping value of a:4
After swapping value of b:3dell@dell-OptiPlex-7040:~$ */

