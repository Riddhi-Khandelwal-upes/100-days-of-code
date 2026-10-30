#include <stdio.h>
int main() {
int dd, mm, yyyy;
char *months[] = {
"Jan", "Feb", "Mar", "Apr", "May", "Jun",
"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
scanf("%d/%d/%d", &dd, &mm, &yyyy);
if (mm < 1 || mm > 12 || dd < 1 || dd > 31) {
printf("Invalid date");
}
else {
printf("%02d-%s-%04d", dd, months[mm - 1], yyyy);
}
return 0;
}
