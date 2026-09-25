#include <stdio.h>
int main() 
{
int num, i,Prime = 1;
printf("Enter a number: ");
scanf("%d", &num);
if (num <= 1)
{
Prime = 0;
} 
else 
{
for (i = 2; i < num; i++) {
if (num % i == 0) {
Prime = 0;
break;
}
}
}
if (Prime)
printf("The number is prime.");
else
printf("The number is not prime.");
return 0;
}
