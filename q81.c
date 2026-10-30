#include <stdio.h>
int main()
{
char str[100];
int count = 0;
scanf("%99[^\n]", str);
while (str[count] != '\0')
{
count++;
}
printf("%d\n", count);
return 0;
}
