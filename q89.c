#include <stdio.h>
#include <string.h>
int main() {
char str[100];
char ch;
int count = 0;
printf("Enter string: ");
fgets(str, sizeof(str), stdin);
printf("Enter character to find: ");
scanf("%c", &ch);
for (int i = 0; str[i] != '\0'; i++) {
if (str[i] == ch) {
count++;
}
}
printf("Frequency of '%c' is %d", ch, count);
return 0;
}
