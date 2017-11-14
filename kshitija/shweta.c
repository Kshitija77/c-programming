//program of swapping of two numbers
#include<stdio.h>
int main()
{
int x,y,temp;
printf("Enter the value of x and y\n");
scanf("%d%d",&x,&y);
printf("Before Swapping\nx=%d\ny=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("After Sapping\nx=%d\ny=%d\n",x,y);
return 0;
}
/******out*****
Enter the value of x and y
2 4
Before Swapping
x=2
y=4
After Sapping
x=4
y=2
dell@dell-OptiPlex-7040:~$*/ 

