#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int difficulty = 0;
void easy_medium_operator_function(void);
void hard_operator_function(void);
char operator_result = '\0';
void easy_question(void);
void medium_question(void);
void hard_question(void);
int confirm = 0;

int main(void)
{
	srand(time(0));
	int check = 0;

	printf("+---------------------+\n");
	printf("| Numeracy Quiz v2.02 |\n");
	printf("+---------------------+\n");
	printf("\n");

	printf("Please select your difficulty (1 = Easy, 2 = Medium, 3 = Hard)... ");
	scanf_s("%d", &difficulty);
	printf("\n");

	if (difficulty == 1)
	{
		while (confirm == 0)
		{
			printf("Press 1-9 for next question (press '0' to exit)... ");
			scanf_s("%d", &check);
			printf("\n");

			if (check == 0)
			{
				confirm = 1;

				printf("Use this tool again!");
			}
			else
			{
				easy_medium_operator_function();
				easy_question();
			}
		}
		return 0;
	}
	else if (difficulty == 2)
	{
		while (confirm == 0)
		{
			printf("Press 1-9 for next question (press '0' to exit)... ");
			scanf_s("%d", &check);
			printf("\n");

			if (check == 0)
			{
				confirm = 1;

				printf("Use this tool again!");
			}
			else
			{
				easy_medium_operator_function();
				medium_question();
			}
		}
		return 0;
	}
	else if (difficulty == 3)
	{
		while (confirm == 0)
		{
			printf("Press 1-9 for next question (press '0' to exit)... ");
			scanf_s("%d", &check);
			printf("\n");

			if (check == 0)
			{
				confirm = 1;

				printf("Use this tool again!");
			}
			else
			{
				hard_operator_function();
				hard_question();
			}
		}
		return 0;
	}
}
	
void easy_medium_operator_function(void)
{
	int random_number = (rand() % 3) + 1;

	if (random_number == 1)
	{
		operator_result = '+';
	}
	else if (random_number == 2)
	{
		operator_result = '-';
	}
	else if (random_number == 3)
	{
		operator_result = '*';
	}
	else if (random_number == 4)
	{
		operator_result = '/';
	}
}

void hard_operator_function(void)
{
	int random_number = (rand() % 2) + 1;

	if (random_number == 1)
	{
		operator_result = '+';
	}
	else if (random_number == 2)
	{
		operator_result = '-';
	}
	else if (random_number == 3)
	{
		operator_result = '*';
	}
	else if (random_number == 4)
	{
		operator_result = '/';
	}
}

// Easy Question
void easy_question(void)
{
	int first_operand = 0.0f;
	int second_operand = 0.0f;
	int user_result = 0.0f;
	int result = 0.0f;
	int space = 0;

	if (operator_result == '+')
	{
		first_operand = (rand() % 25) + 1;
		second_operand = (rand() % 25) + 1;

		result = (first_operand + second_operand);
	}
	else if (operator_result == '-')
	{
		first_operand = (rand() % 25) + 1;
		second_operand = (rand() % 25) + 1;

		if (first_operand < second_operand)
		{
			space = first_operand;
			first_operand = second_operand;
			second_operand = space;
		}
		result = (first_operand - second_operand);
	}
	else if (operator_result == '*')
	{
		first_operand = (rand() % 25) + 1;
		second_operand = ((rand() % 5) + 1);

		result = (first_operand * second_operand);
	}
/*	else if (operator_result == '/')
	{
		first_operand = ((float)rand()) / ((float)100);
		second_operand = ((rand() % 4) + 1);
	}*/

	printf("Question...\n");
	printf("%d %c %d = ?\n", first_operand, operator_result, second_operand);
	printf("\n");

	printf("Result? ");
	scanf_s("%d", &user_result);

	if (result == user_result)
	{
		printf("Correct!..\n");
		printf("\n");
	}
	else
	{
		printf("Incorrect...\n");
		printf("The correct result is: %d\n", result);
		printf("\n");
	}
}

// Medium Question
void medium_question(void)
{
	int first_operand = 0.0f;
	int second_operand = 0.0f;
	int user_result = 0.0f;
	int result = 0.0f;
	int space = 0;

	if (operator_result == '+')
	{
		first_operand = (rand() % 150) + 1;
		second_operand = (rand() % 150) + 1;

		result = (first_operand + second_operand);
	}
	else if (operator_result == '-')
	{
		first_operand = (rand() % 150) + 1;
		second_operand = (rand() % 150) + 1;

		if (first_operand < second_operand)
		{
			space = first_operand;
			first_operand = second_operand;
			second_operand = space;
		}
		result = (first_operand - second_operand);
	}
	else if (operator_result == '*')
	{
		first_operand = (rand() % 150) + 1;
		second_operand = ((rand() % 10) + 1);

		result = (first_operand * second_operand);
	}
	/*	else if (operator_result == '/')
		{
			first_operand = ((float)rand()) / ((float)100);
			second_operand = ((rand() % 4) + 1);
		}*/

	printf("Question...\n");
	printf("%d %c %d = ?\n", first_operand, operator_result, second_operand);
	printf("\n");

	printf("Result? ");
	scanf_s("%d", &user_result);

	if (result == user_result)
	{
		printf("Correct!..\n");
		printf("\n");
	}
	else
	{
		printf("Incorrect...\n");
		printf("The correct result is: %d\n", result);
		printf("\n");
	}
}

// Hard Question
void hard_question(void)
{
	float first_operand = 0.0f;
	float second_operand = 0.0f;
	float space = 0.0f;
	float user_dollars = 0.0f;
	float dollars = 0.0f;
	float user_cents = 0.0f;
	float cents = 0.0f;

	if (operator_result == '+')
	{
		first_operand = ((float)rand()) / ((float)100);
		second_operand = ((float)rand()) / ((float)100);
	}
	else if (operator_result == '-')
	{
		first_operand = ((float)rand()) / ((float)100);
		second_operand = ((float)rand()) / ((float)100);

		if (first_operand < second_operand)
		{
			space = first_operand;
			first_operand = second_operand;
			second_operand = space;
		}
	}
	else if (operator_result == '*')
	{
		first_operand = ((float)rand()) / ((float)100);
		second_operand = ((rand() % 4) + 1);
	}
	else if (operator_result == '/')
	{
		first_operand = ((float)rand()) / ((float)100);
		second_operand = ((rand() % 4) + 1);
	}

	printf("Question...\n");
	printf("%.1f0 %c %.1f0 = ?\n", first_operand, operator_result, second_operand);
	printf("\n");

	printf("How many dollars? ");
	scanf_s("%f", &user_dollars);

	printf("How many cents? ");
	scanf_s("%f", &user_cents);

	if (operator_result == '+')
	{
		dollars = roundf(first_operand + second_operand);
		cents = (first_operand + second_operand) - dollars;
		dollars = dollars - 1;

		if (cents < 0)
		{
			cents = round((cents * -1) * 10);
			cents = (cents * 10);
			cents = 100 - cents;
		}
		else
		{
			cents = round((cents) * 10);
			cents = (cents * 10);
			dollars = dollars - 1;
		}
	}
	else if (operator_result == '-')
	{
		dollars = roundf(first_operand - second_operand);
		cents = (first_operand - second_operand) - dollars;

		if (cents < 0)
		{
			cents = round((cents * -1) * 10);
			cents = (cents * 10);
			cents = 100 - cents;
			dollars = dollars - 1;
		}
		else
		{
			cents = round((cents) * 10);
			cents = (cents * 10);
		}
	}

	// multiplication to be implemented at a later date
/*	else if (operator_result == '*')
	{
		if ((first_operand * second_operand) - round(operator_result));
		dollars = roundf(first_operand * second_operand);
		cents = (first_operand * second_operand) - round(first_operand * second_operand);

		if (cents == 0)
		{
			cents = 0;
		}
		else if (cents > 40)
		{
			dollars = dollars - 2;
			cents = round((cents-1) * 10);
			cents = cents * 10;
		}
		else if (cents < 0)
		{
			printf("%f.1", cents);

			cents = round((cents * -1) * 10);
			cents = (cents * 10);
			cents = 100 - cents;
			dollars = dollars - 1;
		}
		else
		{
			printf("%f.2", cents);

			cents = cents * 100;
		}
	}
	else if (operator_result == '/')
	{
		dollars = roundf(first_operand / second_operand);
		cents = (first_operand / second_operand) - dollars;

		if (cents == 0)
		{
			cents = 0;
		}
		else if (cents > 40)
		{
			cents = round((cents * -1)*10);
			cents = (cents * 10);
		}
		else
		{
			cents = round((cents) * 10);
			cents = (cents * 10);
		}
	}
	*/

	if (user_dollars == dollars && user_cents == cents)
	{
		printf("Correct!..\n");
		printf("\n");
	}
	else
	{
		printf("Incorrect...\n");
		printf("The correct amount of dollars is: %.1f0\n", dollars);
		printf("The correct amount of cents is: %.1f0\n", cents);
		printf("\n");
	}
}
