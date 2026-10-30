#include <stdio.h>
int main()
{
int a[100], n, i;
int largest, secondLargest;
printf("Enter the number of elements: ");
scanf("%d", &n);
if (n < 2 || n > 100)
{
printf("Invalid array size!\n");
return 0;
}
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
largest = a[0];
secondLargest = 0;
for (i = 1; i < n; i++)
{
if (a[i] > largest)
{
secondLargest = largest;
largest = a[i];
}
else if (a[i] < largest &&
(secondLargest == 0 || a[i] > secondLargest))
{
secondLargest = a[i];
}
}
if (secondLargest == 0)
{
printf("Second largest element does not exist.\n");
}
else
{
printf("Second largest element = %d\n", secondLargest);
}
return 0;
}
