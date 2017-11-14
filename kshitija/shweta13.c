//program of add subtract multiply divide
#include<stdio.h>
int main()
{
int first,second,add,subtract,multiply;
float divide;
printf("Enter two integers\n");
scanf("%d%d",&first,&second);
add=first+second;
subtract=first-second;
multiply=first*second;
divide=first/(float)second;
printf("sum=%d\n",add);
printf("difference=%d\n",subtract);
printf("multiplication=%d\n",multiply);
printf("division=%.2f\n",divide);
return 0;
}
/*************out********
Enter two integers
2 4
sum=6
difference=-2
multiplication=8
division=0.50
dell@dell-OptiPlex-7040:~$*/ 

