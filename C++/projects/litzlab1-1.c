#include <stdio.h>

int main()
{
	//float radius;
	//float diameter; //radius * 2
	//float circumference;//2 * pi * radius
	//float area; // pi * radius * radius
	//float pi = 3.14;

	//printf("Enter Radius: \n");
	//scanf_s("%f", &radius);

	//diameter = radius * 2;
	//circumference = 2 * pi * radius;
	//area = pi * radius * radius;

	//printf("The diameter is: %f \n", diameter );
	//printf("The diameter is: %f \n", circumference);
	//printf("The diameter is: %f \n", area);

	//int one, two, three, four, five;
	//int smallest, largest;

	//printf("Enter 5 numbers: \n");
	//scanf_s("%d %d %d %d %d", &one, &two, &three, &four, &five);
	//largest = one;
	//smallest = one;  //assume "one" is the largest & smallest

	//compare each number in list
	//if (two > largest) {
		//largest = two;
	//}
	//if (two < smallest) {
		//smallest = two;
	//}
	//if (three > largest) {
		//largest = three;
	//}
	//if (three < smallest) {
		//smallest = three;
	//}
	//if (four > largest) {
		//largest = four;
	//}
	//if (four < smallest) {
		//smallest = four;
	//}
	//if (five > largest) {
		//largest = five;
	//}
	//if (five < smallest) {
		//smallest = five;
	//}

	//printf("The largest number is %d \n", largest);
	//printf(" The smallest number is %d \n", smallest);


	const int bm_constant = 703; // location cannot be changed
	float height = 0;
	float weight = 0;
	float BMI = 0;

	//grab users weight
	printf("%s", "Please enter your height in inches");
	scanf("%f", &height);

	//get users weight
	printf("%s", "Please enter your weight");
	scanf("%f", &weight);

	BMI = weight * bm_constant / (height * height); //calculates BMI

	printf("Your BMI is %3.2f \n\n", BMI);

	puts("BMI VALUES");
	puts("Under weight: \tless than 18.5");
	puts("Normal: \tbetween 18.5 and 24.9");
	puts("Overweight: \tbetween 15 and 19.9");
	puts("Obese: \t\t 30 or greater");



}