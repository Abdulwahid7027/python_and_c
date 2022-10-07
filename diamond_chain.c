#include <stdio.h>

void top_diamond_shape(int diamond_width);
void bottom_diamond_shape(int diamond_width);
void print_diamond_chain(int diamond_width, int chain_size);

int main(void)
{
	int diamond_width = 0;
	int chain_size = 0;

	printf("Desired diamond width? ");
	scanf("%d", &diamond_width);

	printf("How many diamonds? ");
	scanf("%d", &chain_size);

	// integer validation
	if (diamond_width > 0 && chain_size > 0)
	{
		print_diamond_chain(diamond_width, chain_size);
	}
	else
	{
		printf("Invalid width/size, please re-enter...");
	}

	return 0;
}

// helper function for the top half of the diamond
void top_diamond_shape(int diamond_width)
{
	for (int counter_1 = 0; counter_1 < (diamond_width / 2 + 2); counter_1++)
	{
		for (int counter_2 = (diamond_width / 2 + 1); counter_2 > counter_1; counter_2--)
		{
			printf(" ");
		}

		printf("/");

		if (counter_1 > 0)
		{
			printf(" ");
		}

		if (counter_1 > 1)
		{
			for (int counter_3 = 1; counter_3 < counter_1; counter_3++)
			{
				printf("**");
			}
		}

		if (counter_1 > 0)
		{
			printf(" ");
		}

		printf("\\");

		printf("\n");
	}
}

// helper function for the bottom half of the diamond
void bottom_diamond_shape(int diamond_width)
{
	for (int counter_1 = 0; counter_1 < (diamond_width / 2 + 2); counter_1++)
	{
		for (int counter_2 = 0; counter_2 < counter_1; counter_2++)
		{
			printf(" ");
		}

		printf("\\");

		if (counter_1 < (diamond_width / 2 + 1))
		{
			printf(" ");
		}

		if (counter_1 < (diamond_width / 2))
		{
			for (int counter_3 = (diamond_width / 2); counter_3 > counter_1; counter_3--)
			{
				printf("**");
			}
		}
		
		if (counter_1 != (diamond_width / 2 + 1))
		{
			printf(" ");
		}

		printf("/");

		printf("\n");
	}
}

// function to print out the two helper functions for chain_size
void print_diamond_chain(int diamond_width, int chain_size)
{
	while (chain_size > 0)
	{
		top_diamond_shape(diamond_width);

		bottom_diamond_shape(diamond_width);

		chain_size--;
	}
}
