#include <stdio.h>
int main()
{
int a[10][10], rows, cols, i, j, d;
scanf("%d %d", &rows, &cols);
if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
{
printf("Invalid matrix size\n");
return 0;
}
for (i = 0; i < rows; i++)
{
for (j = 0; j < cols; j++)
{
scanf("%d", &a[i][j]);
}
}
for (d = 0; d < rows + cols - 1; d++)
{
if (d % 2 == 0)
{
i = (d < rows) ? d : rows - 1;
j = d - i;
while (i >= 0 && j < cols)
{
printf("%d ", a[i][j]);
i--;
j++;
}
}
else
{
j = (d < cols) ? d : cols - 1;
i = d - j;
while (j >= 0 && i < rows)
{
printf("%d ", a[i][j]);
i++;
j--;
}
}
}
return 0;
}
