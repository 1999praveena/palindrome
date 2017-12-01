#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,d=0,e;
clrscr();
printf("Enter number:");
scanf("%d",&b);
a=b;
while(b!=0)
{
e=b%10;
d=d*10+e;
b=b/10;
}
printf("the reverse is %d",a,d);
if(a==d)
{
printf("the number is palindrome");
}
else
{
printf("the number is not palindrome");
}
getch();
return 0;
}


