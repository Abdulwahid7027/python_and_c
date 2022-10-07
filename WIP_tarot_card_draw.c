#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

struct Tarot
{
	char name[32];
	char description[128];
};

char *card_design[78] = {
	(".-------------------.\n"
	 "|         0  *  *{    |\n"
	 "|             *  *\\`~ |\n"
	 "|       /P * *  *    |\n"
	 "|      / ###~8 *     |\n"
	 "|     / (^◡^)       |\n"
	 "|    /  /   \\\\\\    @  |\n"
	 "|  E /= = / \\\\\\@ - @ / \\\\\\ == = 3  |\n"
	 "|       /   \\\\\\       |\n"
	 "|      /~~~~~\\\\\\      |\n"
	 "|       (/ (/   /\\\\\\_; \\\\\\|\n"
	 "|; \\\\\\ || \\\\\\\\\\~/     |\n"
	 "|; \\\\\\~/  ||  \\\\\\\\\\      |\n"
	 "|/     od   o/      |\n"
	 "|                   |\n"
	 "|            U(･ｪ･)U|\n"
	 "|              m m  |\n"
	 "|------------------ - |\n"
	 "|      The Fool |\n"
	 "\\`-------------------´\n")

};


int main(void)
{
	srand(time(0));

	Sleep(100);
	printf("%d\n", ((rand() % 78) + 1));

	printf("%s", card_design[0]);

	return 0;
}
