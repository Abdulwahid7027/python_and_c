#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[128];
	char data[256];
	int ascii_charlist[127];

	for (int counter = 0; counter < 127; counter++)
	{
		ascii_charlist[counter] = 0;
	}
	
	printf("%d\n", ascii_charlist[0]);

	printf("Filename? ");
	scanf(" %127[^\n]", &filename);
	printf("\n");

	FILE *p_file = fopen(filename, "r");

	if (p_file == NULL)
	{
		printf("Error in opening file\n");
	}
	else 
	{

		while (!feof(p_file))
		{
			fgets(data, 256, p_file);

			for (int counter = 0; data[counter] != '\0'; counter++)
			{
				if (data[counter] >= 32 && data[counter] <= 127)
				{
					int temp_value = 0;
					temp_value = data[counter];

					printf("%d\n", temp_value);
					ascii_charlist[temp_value]++;
				}
			}
		}
	}

	printf("In sample.txt, the following was found:");
	printf("\n");

	for (int counter = 32; counter <= 126; counter++)
	{
		printf("ASCII %d (0x%X) '%c' was found %d times\n", counter, counter, counter, ascii_charlist[counter]);
	}

	return 0;
}
