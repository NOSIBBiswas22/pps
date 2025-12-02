#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf(" %[^\n]", str);

    // P1. Printing ascii values of characters
    for(int i=0; i<n; i++){
        printf("%d ", str[i]);
    }
    printf("\n");

    // P2. Remove vowels form a string
    for(int i=0; i<n; i++){
        if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            printf("%c", str[i]);
        }
    }
    printf("\n");

    // P3. Count number of words in a string
    int word_count = 1;

    for(int i=0; i<n; i++){
        if(str[i] == ' '){
            word_count++;
        }
    }
    printf("%d\n", word_count);

    // P4. Check a string is isogram or not only lowercase letters
    int freq[26] = {0};
    
    for(int i=0; i<n; i++){
        freq[str[i]-'a']++;

        if(freq[str[i]-'a'] > 1) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}