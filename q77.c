#include <stdio.h>
int main()
{
int a[10][10], n, i, j;
int distinct = 1;
printf("Enter the order of the square matrix: ");
scanf("%d", &n);
if (n < 1 || n > 10)
{
printf("Invalid matrix size!\n");
return 0;
}
printf("Enter the elements of the matrix:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &a[i][j]);
}
}
for (i = 0; i < n; i++)
{
for (j = i + 1; j < n; j++)
{
if (a[i][i] == a[j][j])
{
distinct = 0;
break;
}
}
if (distinct == 0)
break;
}
if (distinct == 1)
printf("Diagonal elements are distinct.\n");
else
printf("Diagonal elements are not distinct.\n");
return 0;
}
