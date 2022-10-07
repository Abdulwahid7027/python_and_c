#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));

	int first_rand_num = 0;
	int second_rand_num = 0;
	int product_of_numbers = 0;
	char product_guess[128];
	int valid = 0;

	//computing random numbers and product
	first_rand_num = ((rand() % 11) + 2);
	second_rand_num = ((rand() % 11) + 2);
	product_of_numbers = first_rand_num * second_rand_num;

	//read user string and convert to int
	printf("What is %d x %d? ", first_rand_num, second_rand_num);
	scanf("%127[^\n]s", &product_guess);

	int guess = atoi(product_guess);

	//while user string has characters that aren't digits, iterate over and over again
	while (guess == 0 && valid == 0)
	{
		printf("Invalid input!\n");

		printf("What is %d x %d? ", first_rand_num, second_rand_num);
		scanf(" %127[^\n]s", &product_guess);

		guess = atoi(product_guess);

		if (guess != 0)
		{
			valid = 1;
		}
	}
	if (guess == product_of_numbers)
	{
		printf("\n");
		printf("Congratulations!");
	}
	else if ((guess > 0 || guess < 0) && guess != product_of_numbers)
	{
		printf("\n");
		printf("Incorrect! %d x %d is %d", first_rand_num, second_rand_num, product_of_numbers);
	}
	return 0;
}
