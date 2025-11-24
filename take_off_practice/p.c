#include<stdio.h>

int main(){
    char alp;

    scanf("%c", &alp);

    if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u'){
        printf("vowel\n");
    } else {
        printf("consonant\n");
    }

    return 0;
}