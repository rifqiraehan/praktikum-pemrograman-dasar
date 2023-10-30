#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char str1[30], str2[30], str3[30], str4[30], str5[30], str6[30];

    strcpy(str1, "Don't dulu baru bekerja");
    strcpy(str2, "baru ambil baru happy");
    strcpy(str3, "Ini worry belajar itu");

    puts("str1 = "); puts(str1);
    puts("str2 = "); puts(str2);
    puts("str3 = "); puts(str3);

    puts("\nTekan ENTER untuk melihat hasilnya!");
    getch();
    strncpy(str4, str3, 4); str4[4] = '\0';
    strncpy(str5, str1+6, 5); str5[5] = '\0';
    strncpy(str6, str2, 5); str6[5] = '\0';
    strcat(str4, str5); strcat(str4, str6);
    strncpy(str6, str3+18, 3); str6[3] = '\0';
    strcat(str4, str6);     printf("Isi dari str4 = "); puts(str4);

    getch();
}