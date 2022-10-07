#include <stdio.h>
#include <assert.h>

int player_one_input();
int player_two_input();
void win_check(int table_array[9]);
void print_table(int table_array[9]);
int table_array[9];
int winning_conditions = 0;
int turn_counter = 1;

int main(void)
{
	int counter = 1;

	while (winning_conditions == 0)
	{
		if (counter % 2 == 1)
		{
			table_array[player_one_input()] = 1;

			print_table(table_array);

			win_check(table_array);
		}
		else if (counter % 2 == 0)
		{
			if (turn_counter == 5)
			{
				printf("Tie!");

				winning_conditions = 3;
			}
			else
			{
				table_array[player_two_input()] = 2;

				print_table(table_array);

				win_check(table_array);
			}
		}
		counter++;
	}

	return 0;
}

// function for x's turn
int player_one_input()
{

	int x_position = 0;
	int correct_value = 0;

	printf("Turn %d for x, please input a value from 1-9: ", turn_counter);
	scanf("%d", &x_position);

	while (((table_array[x_position - 1] != 0) || (x_position > 9 || x_position < 1)) && (correct_value == 0))
	{
		if (((table_array[x_position - 1] != 0) || (x_position > 9 || x_position < 1)) && (correct_value == 0))
		{
			printf("Invalid input, please try again: ");
			scanf("%d", &x_position);
		}
		else
		{
			correct_value = 1;
		}
	}

	return (x_position - 1);
}

// function for o's turn
int player_two_input()
{
	int o_position = 0;
	int correct_value = 0;

	printf("Turn %d for o, please input a value from 1-9: ", turn_counter);
	scanf("%d", &o_position);

	while (((table_array[o_position - 1] != 0) || (o_position > 9 || o_position < 1)) && (correct_value == 0))
	{
		if (((table_array[o_position - 1] != 0) || (o_position > 9 || o_position < 1)) && (correct_value == 0))
		{
			printf("Invalid input, please try again: ");
			scanf("%d", &o_position);
		}
		else
		{
			correct_value = 1;
		}
	}

	turn_counter++;

	return (o_position - 1);
}

// function to print table and current values
void print_table(int table_array[9])
{
	printf("\n");
	printf("+---+---+---+\n");
	printf("| %d | %d | %d |\n", table_array[0], table_array[1], table_array[2]);
	printf("+---+---+---+\n");
	printf("| %d | %d | %d |\n", table_array[3], table_array[4], table_array[5]);
	printf("+---+---+---+\n");
	printf("| %d | %d | %d |\n", table_array[6], table_array[7], table_array[8]);
	printf("+---+---+---+\n");
	printf("\n");
}

// function to check who wins to stop main loop from iterating
void win_check(int table_array[9])
{
	// for player x
	if (table_array[0] == 1 && table_array[1] == 1 && table_array[2] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[3] == 1 && table_array[4] == 1 && table_array[5] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[6] == 1 && table_array[7] == 1 && table_array[8] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[0] == 1 && table_array[3] == 1 && table_array[6] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[1] == 1 && table_array[4] == 1 && table_array[7] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[2] == 1 && table_array[5] == 1 && table_array[8] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[0] == 1 && table_array[4] == 1 && table_array[8] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}
	else if (table_array[2] == 1 && table_array[4] == 1 && table_array[6] == 1)
	{
		winning_conditions = 1;

		printf("x wins!");
	}

	// for player o
	if (table_array[0] == 2 && table_array[1] == 2 && table_array[2] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[3] == 2 && table_array[4] == 2 && table_array[5] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[6] == 2 && table_array[7] == 2 && table_array[8] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[0] == 2 && table_array[3] == 2 && table_array[6] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[1] == 2 && table_array[4] == 2 && table_array[7] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[2] == 2 && table_array[5] == 2 && table_array[8] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[0] == 2 && table_array[4] == 2 && table_array[8] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
	else if (table_array[2] == 2 && table_array[4] == 2 && table_array[6] == 2)
	{
		winning_conditions = 2;

		printf("o wins!");
	}
}
