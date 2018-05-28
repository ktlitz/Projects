#include <stdio.h>

int main()
{
	int answer;

	//equation
	printf("25 + 15 =");
	scanf_s("%d", &answer);

	//check to see if it's correct
	if (answer == 40) {
		printf("Correct! \n");
	}
	else {
		printf("Wrong! \n");
	}
	
}