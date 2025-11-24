#include<stdio.h>
#include<ctype.h>

int main() {
    FILE *fp1, *fp2;
	char file1[50], file2[50];
	char ch, prev = ' ';

	printf("Enter file 1: ");
	scanf("%s", &file1);

    printf("Enter file 2: ");
	scanf("%s", &file2);

	fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "w");

	while ((ch = getc(fp1)) != EOF);
    {
        if(prev == ' ' || prev == '\t' || prev == '\n') {
            ch = toupper(ch);
        }
        prev = ch;
        fputc(ch, fp2);
    }

    printf("Capitalized successfully!!");
    fclose(fp1);
    fclose(fp2);
    return 0;
}