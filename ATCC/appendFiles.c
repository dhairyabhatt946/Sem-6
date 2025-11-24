#include<stdio.h>

int main() {
    FILE *fp1, *fp2;

    char file1[50], file2[50];

    printf("Enter file 1: ");
    scanf("%s", file1);
    printf("Enter file 2: ");
    scanf("%s", file2);

    fp1 = fopen(file1, "a");
    fp2 = fopen(file2, "r");
    char ch;

    while ((ch = getc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }

    printf("File appended successfully!!");
    fclose(fp1);
    fclose(fp2);
    return 0;
}