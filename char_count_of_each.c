#include<stdio.h>
#include<string.h>
int main(){
    int arr[26] = {0}, i;
    char word[50];
    printf("Enter a word\n");
    scanf("%s", word);
    int len = strlen(word);
    for(i = 0; i < len; i++){
        arr[word[i] % 97]++;
    }
    for(i = 0; i < len; i++){
        printf("%c%d", (i+97), arr[i]);
     }
    return 0;
}
