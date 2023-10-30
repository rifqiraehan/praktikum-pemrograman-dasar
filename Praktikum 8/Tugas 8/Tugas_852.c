#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    char reversed[100];

    printf("Kalimat: ");
    scanf("%[^\n]", input);

    strcpy(reversed, input);
    strrev(reversed);

    if (strcmp(input, reversed) == 0) {
        printf("Termasuk PALINDROM\n");
    } else {
        printf("Bukan PALINDROM\n");
    }

    return 0;
}