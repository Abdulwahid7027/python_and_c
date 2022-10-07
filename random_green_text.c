#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "p1colour.h"

int sleep_time(void);
int random_char_num(void);
void random_char(void);

int main(void)
{
	srand(time(0));

	set_text_colour(GREEN, BLACK);

	for (int counter = 0; counter < 1000; counter++)
	{
		Sleep(sleep_time());
		random_char();
	}

	return 0;
}

// returns random sleep time between each printf line
int sleep_time(void)
{
	int random_num = 0;

	random_num = ((rand() % 50) + 1);

	return random_num;
}

// returns random number for char value per line
int random_char_num(void)
{
	int random_char_num = 0;

	random_char_num = ((rand() % 70) + 50);

	return random_char_num;
}

// prints random char value
void random_char(void)
{
	for (int counter = 0; counter < random_char_num(); counter++)
	{
		char random_char = ((rand() % 94) + 32);
		printf("%c", random_char);
	}

	printf("\n");
}
