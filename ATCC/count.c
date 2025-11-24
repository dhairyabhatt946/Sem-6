#include<stdio.h>

int main() {
	FILE *fp;
	char filename[50];
	int chars = 0, spaces = 0, tabs = 0, lines = 1;
	char ch;

	printf("Enter filename: ");
	scanf("%s", &filename);

	fp = fopen(filename, "r");

	if(fp == NULL) {
		printf("File not found");
		return 1;
	}

	while ((ch = getc(fp)) != EOF)
	{
		chars++;
		if(ch == ' ') spaces++;
		else if(ch == '\t') tabs++;
		else if(ch == '\n') lines++;
	}

	printf("\nNumber of characters: %d", chars);
	printf("\nNumber of spaces: %d", spaces);
	printf("\nNumber of tabs: %d", tabs);
	printf("\nNumber of lines: %d", lines);

	fclose(fp);
	return 0;
}
