#include <stdio.h>
int main() 
{
int num, first, last, temp, divisor = 1;
int middle, result;
printf("Enter a number: ");
scanf("%d", &num);
temp = num;
while (temp >= 10) 
{
temp = temp / 10;
divisor = divisor * 10;
}
first = temp;
last = num % 10;
middle = (num % divisor) / 10;
result = last * divisor + middle * 10 + first;
printf("Number after swapping = %d", result);
return 0;
}
