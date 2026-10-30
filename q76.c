#include <stdio.h>
int main()
{
int a[10][10], n, i, j;
int symmetric = 1;
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
for (j = 0; j < n; j++)
{
if (a[i][j] != a[j][i])
{
symmetric = 0;
break;
}
}
if (symmetric == 0)
break;
}
if (symmetric == 1)
printf("The matrix is symmetric.\n");
else
printf("The matrix is not symmetric.\n");
return 0;
}
