//program of leap year
#include<stdio.h>
int main()
{
int year;
printf("Enter a year to check if it is a leap year\n");
scanf("%d",&year);
if(year%400==0)
printf("%d is a leap year.\n",year);
else if(year%100==0)
printf("%d is not a leap year.\n",year);
else if(year%4==0)
printf("%d is a leap year.\n",year);
else
printf("% is not a leap year.\n",year);
return 0;
}
/***out*****
Enter a year to check if it is a leap year
2017
 2017s not a leap year.
dell@dell-OptiPlex-7040:~$*/ 

