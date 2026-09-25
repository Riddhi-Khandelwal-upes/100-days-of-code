#include<stdio.h>
int main()
{
int num;
long long binary_num=0;
long long place_value=1;
printf("enter a number");
scanf("%d",&num);
if (num==0){
printf("the binary representation is: 0\n");
}
else
{
int rem;
while(num>0){
rem = num%2;
binary_num+=rem *place_value;
num = num / 2;
place_value *= 10;
}
printf("the binary representation is :%lld\n", binary_num);
}
return 0;
}

