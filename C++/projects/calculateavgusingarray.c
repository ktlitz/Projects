//kourtni litzenberg
//U3 average

#include <stdio.h>
int main() {
	int n;
	int i;
	int num[10], sum = 0, average;

	printf("Enter the number of values to be averaged:");
	scanf_s("%d", &n);

	for (i = 0; i < n; ++i)
	{
		printf("Enter a number:\n ");
		scanf_s("%d", &num[i]);
		sum += num[i];
	}

	average = sum / n;
	printf("Average = %d", average);
}
