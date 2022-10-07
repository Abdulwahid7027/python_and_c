#include <stdio.h>

int main(void)
{
	int height = 0;

	printf("Triangle's height? ");
	scanf("%d", &height);

	FILE* p_file = 0;

	p_file = fopen("triangle.txt", "w");

	for (int row_counter = 0; row_counter < height; row_counter++)
	{
		for (int space_counter = (row_counter + 1); space_counter < height; space_counter++)
		{
			fprintf(p_file, " ");
		}

		fprintf(p_file, "/");

		for (int inner_counter = row_counter; inner_counter > 0; inner_counter--)
		{
			fprintf(p_file, "==");
		}

		fprintf(p_file, "\\");
		fprintf(p_file, "\n");
	}

	fclose(p_file);

	printf("File written!");

	return 0;
}
