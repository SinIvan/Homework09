#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("C://110360253_ËÎ¨ô°a_HW7/welcome.txt", "r");
	fptr2 = fopen("C://110360253_ËÎ¨ô°a_HW7/output.txt", "w");

	if (fptr1 != NULL && fptr2 != NULL)
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("Copy done!!\n");
	}
	else
		printf("Open fail!!\n");
	system("pause");
	return 0;
}