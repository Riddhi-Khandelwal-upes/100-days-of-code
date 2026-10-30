#include <stdio.h>
int main()
{
int a[100], n, k, i, j, temp;
printf("Enter the number of elements: ");
scanf("%d", &n);
if (n < 1 || n > 100)
{
printf("Invalid array size!\n");
return 0;
}
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the number of positions to rotate: ");
scanf("%d", &k);
if (k < 0)
{
printf("Invalid number of positions!\n");
return 0;
}
k = k % n;
for (i = 0; i < k; i++)
{
temp = a[n - 1];
for (j = n - 1; j > 0; j--)
{
a[j] = a[j - 1];
}
a[0] = temp;
}
printf("Array after rotation:\n");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
