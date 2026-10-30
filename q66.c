#include <stdio.h>
int main()
{
int a[100], n, element, i, j;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d elements in sorted order:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the element to insert: ");
scanf("%d", &element);
i = n - 1;
while (i >= 0 && a[i] > element)
{
a[i + 1] = a[i];
i--;
}
a[i + 1] = element;
n++;
printf("Array after insertion:\n");
for (j = 0; j < n; j++)
{
printf("%d ", a[j]);
}
return 0;
}
