#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
char name[100];
int i, start = 0, lastSpace = -1;
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = '\0';
int len = strlen(name);
while (len > 0 && name[len - 1] == ' ') {
name[--len] = '\0';
}
for (i = 0; i < len; i++) {
if (name[i] == ' ' && i + 1 < len &&
name[i + 1] != ' ') {
lastSpace = i;
}
}
for (i = 0; i < len; i++) {
if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
if (lastSpace == -1 || i < lastSpace) {
printf("%c. ", toupper((unsigned char)name[i]));
}
}
}
if (lastSpace != -1) {
i = lastSpace + 1;
while (name[i] == ' ') {
i++;
}
printf("%s", name + i);
}
else {
printf("%s", name);
}
return 0;
}
