#include<stdio.h>
int main()
{
int n, arr[100];
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("the array elements are:\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
return 0;
}

