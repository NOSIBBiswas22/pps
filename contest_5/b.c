#include<stdio.h>
#include<string.h>

int main() {
    char str[4] = "ABC";
    scanf("%s", str);

    if((str[0] == 'A') && (str[1] == 'A' ||  str[1] == 'B') && (str[2] == 'A' || str[2] == 'B' || str[2] == 'C')) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}