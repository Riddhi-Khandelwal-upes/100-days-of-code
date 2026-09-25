#include <stdio.h>
int main() {
int num, original, digit, factorial, sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
original = num;
while (num != 0) 
{
digit = num % 10;
factorial = 1;
for (int i = 1; i <= digit; i++) 
{
factorial = factorial * i;
}
sum = sum + factorial;
num = num / 10;
}
if (sum == original)
printf("The number is a Strong number.");
else
printf("The number is not a Strong number.");
return 0;
}
