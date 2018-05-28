
#include <stdio.h>



int main(void) {
	int paycode;

	double managersal;
	double employeesal;
	double commissionsal;
	int commissionamount = 250;
	double grossweekly;
	double piecesal;
	int numberpieces;
	double costperpiece;
	int hoursworked;
	double total;
	
	// enter paycode
	printf("Please enter paycode: ");
	scanf_s("%d", &paycode);

	while (paycode != -1) {


		switch (paycode) {

		case 1: printf("Manager Selected\n");
			// ask for manager's salary -- printf and scanf
			printf("Enter manager salary: ");
			scanf_s("%f", &managersal);
			printf("Managers pay is: %f", total);
			break;

		case 2: printf("Hourly Employee Selected\n");
			// ask for hourly salary
			printf("Enter hourly salary: ");
			scanf_s("%f", &employeesal);
			// ask for hours worked
			printf("Hours Worked:");
			scanf_s("%d", &hoursworked);
			// calculate
			total = (employeesal * hoursworked);
			// print
			printf("Workers pay =: %f", total);
			break;

		case 3: printf("Commission Employee Selected\n");
			// ask for commission salary
			printf("Enter commission salary: ");
			scanf_s("%f", &commissionamount);
			// ask for hours worked
			printf("Gross Sales:");
			scanf_s("%d", &grossweekly);
			// calculate
			total = commissionamount + grossweekly * 5.7 ;
			// print
			printf("Workers pay =: %f", total);
			break;

		case 4: printf("Piece Worker Selected\n");
			// ask for how many pieces done
			printf("Enter # of pieces: ");
			scanf_s("%d", &numberpieces);
			// ask for cost of each piece
			printf("Cost per piece:");
			scanf_s("%f", &costperpiece);
			// calculate
			total = numberpieces * costperpiece;
			// print
			printf("Piece Worker pay =: %f", total);
			break;
		}
		// implement other cases.


		printf("Please enter paycode:");
		scanf_s("%d", &paycode);

	} // end while
}