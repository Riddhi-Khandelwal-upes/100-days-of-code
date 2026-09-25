#include <stdio.h>
#include <math.h>
int main() 
{
int arms, rem, temp;
int sum = 0;
printf("Enter a number: ");
scanf("%d", &arms);
temp = arms;
while (temp != 0) {
rem = temp % 10;
sum = sum +(rem*rem*rem);
temp = temp / 10;
}
if (sum == arms)
printf("The number is an Armstrong number.");
else
printf("The number is not an Armstrong number.");
return 0;
}
