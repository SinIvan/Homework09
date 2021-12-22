#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://110360253_ËÎ¨ô°a_HW7/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\nTotal have %d words\n", count);
	}
	else
		printf("Open fail!!\n");
	system("pause");
	return 0;
}