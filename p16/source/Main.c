#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("C://110360253_ËÎ¨ô°a_HW7/output.txt", "a");
	printf("Please witre some words, pause ENTER to finish:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	printf("\nAdd done!!\n");
	fclose(fptr);
	system("pause");
	return 0;
}