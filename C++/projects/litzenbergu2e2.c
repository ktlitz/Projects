//kourtni litzenberg
//5/20/2018

#include <stdio.h>




int main()
{
	int value;
	int total;
	int sum = 0;

	printf("Enter the number of values to be processed: ");
		scanf_s("%d", &total);
	
	//loop the number of times input for total
	for (int i = 1; i <= total; ++i)
	{
		printf("Enter value: "); 
		scanf_s("%d", &value);

		sum = sum + value;
		
	}
	printf("The sum of the values given is %d\n", sum);
}