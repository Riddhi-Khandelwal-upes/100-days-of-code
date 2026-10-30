#include<stdio.h>
int main()
{
int i,n;
int arr[n];
int even_count=0,odd_count=0;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++){
if(arr[i] % 2==0){
even_count++;
}
else{
odd_count++;
}
}
printf("even no.=%d\n",even_count);
printf("odd no.= %d\n",odd_count);
return 0;
}

