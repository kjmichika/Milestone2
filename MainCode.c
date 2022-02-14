#include <stdio.h>
#include <string.h>
#include <math.h>
/* This program is to illustrate simple math algorithms that users can select.
 *The options will repeat till the user decides to quit with the quit option ‘e’  */
 // function to sort the array in ascending order
void Array_sort(int* array, int n)
{
	// declare some local variables
	int i = 0, j = 0, temp = 0;
	// A double loop to check each individual cell of the array and check to see if the first cell is larger than the second cell
	// if the second cell is larger then it will swap the two cells. The second loops is for rechecking all cells are in order smallest to biggest.
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	// Prints out the sorted array in order from smallest to largest.
	printf("The array after sorting is..\n");
	for (i = 0; i < n; i++)
	{
		printf("\narray_1[%d] : %d", i, array[i]);
	}
}

// function to calculate the median of the array
float Find_median(int array[], int n)
{
	float median = 0;

	// if number of elements are even
	if (n % 2 == 0)
		median = (array[(n - 1) / 2] + array[n / 2]) / 2.0;
	// if number of elements are odd
	else
		median = array[n / 2];

	return median;
}

struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union

union union_example
{
	int integer;
	float decimal;
	char name[20];
};

int main(void)
{
	// creating variable for structure
			// and initializing values difference
			 // six
	struct struct_example s = { 18,38,"Kenneth Michika" };

	// creating variable for union
	// and initializing values
	union union_example u = { 18 };

	// Assigning variables for the simple math options
	int a, b;
	char menu_option;
	float c;
	// declare two int arrays
	int array_1[100] = { 0 };
	// declare some local variables
	int i = 0, n = 0;
	float median = 0;
	do
	{
		// This is the menu option giving you a variaty to choose from.
		printf("Please select a math program option.\n");
		printf("Would you like to..... \n");
		printf("\n");
		printf("a. Add two numbers together\n");
		printf("b. Subtract two number from each other.\n");
		printf("c. Get the product of two numbers.\n");
		printf("d. Get the quotient of two numbers.\n");
		printf("e. Make an array (up to 100 cells) rearrange the cells in order and get the mean, median, and mode of the array. \n");
		printf("f. will give a demonstration of structures and unions information. \n");
		printf("g. Quit.\n");
		// Scan user input.
		scanf_s("%c", &menu_option);
		// Switch function allowing the program to run the option the user selected.

		switch (menu_option)

		{
			// Case function to run the code from the customer selection.
		case 'a':
			printf("Calcuation will take two numbers you enter and add them.\n");
			// A pause from the program to review the option selected.
			system("pause");
			// Get and scan first number from user.
			printf("Enter the first number: ");
			scanf_s("%d", &a);
			// Get and scan second number from user.
			printf("Enter the second number: ");
			scanf_s("%d", &b);
			// The print out of the adding of two numbers the user entered.
			printf("\nThe addition result is: %d\n", a + b);
			// A pause from the program to review the results.
			system("pause");
			// Break from the case function to continue the loop.
			break;
			// Case function to run the code from the customer selection.
		case 'b':
			printf("Calcuation will take two numbers you enter and subtract them.\n");
			// A pause from the program to review the option selected.
			system("pause");
			// Get and scan first number from user.
			printf("Enter the first number: ");
			scanf_s("%d", &a);
			// Get and scan second number from user.
			printf("Enter the second number: ");
			scanf_s("%d", &b);
			// The print out of the subtracting of two numbers the user entered.
			printf("\nThe subtraction result is: %d\n", a - b);
			// A pause from the program to review the results.
			system("pause");
			// Break from the case function to continue the loop.
			break;
			// Case function to run the code from the customer selection.
		case 'c':
			printf("Calcuation will take two numbers you enter and multiply them.\n");
			// A pause from the program to review the option selected.
			system("pause");
			// Get and scan first number from user.
			printf("Enter the first number: ");
			scanf_s("%d", &a);
			// Get and scan second number from user.
			printf("Enter the second number: ");
			scanf_s("%d", &b);
			// The print out of the product of two numbers the user entered.
			printf("\nThe product result is: %d\n", a * b);
			// A pause from the program to review the results.
			system("pause");
			// Break from the case function to continue the loop.
			break;
			// Case function to run the code from the customer selection.
		case 'd':
			printf("Calcuation will take two numbers you enter and divide them.\n");
			// A pause from the program to review the option selected.
			system("pause");
			// Get and scan first number from user.
			printf("Enter the first number: ");
			scanf_s("%d", &a);
			// Get and scan second number from user.
			printf("Enter the second number: ");
			scanf_s("%d", &b);
			// Error checking if statement to see if second number entered is 0 and to exit if it is.
			if (b == 0)
			{
				fprintf(stderr, "Division by zero! Exiting...\n");
				system("pause");
				exit(-1);
			}
			// Calculating the quotient of the two numbers in a float for decimal answers.
			c = a / (float)b;
			fprintf(stderr, "\nThe quotient result is: %f\n", c);
			// A pause from the program to review the results.
			system("pause");
			// Break from the case function to continue the loop.
			break;

		case 'e':
			printf("Calcuation will take any size Array (up to 100) and calculate the mean, median, and mode.\n");
			// A pause from the program to review the option selected.
			system("pause");
			printf("Enter the number of elements for the array : \n");
			scanf_s("%d", &n);

			printf("\nEnter the elements for array_1..\n");
			for (i = 0; i < n; i++)
			{
				printf("array_1[%d] : ", i);
				scanf_s("%d", &array_1[i]);
			}
			// Directs to the array_sort function at beginning of code.
			Array_sort(array_1, n);

			// Directs to find median function at beginning of code.
			median = Find_median(array_1, n);
			// the median or middle of your array.
			printf("\nThe median is: %f\n", median);
			double sum = 0, mean;
			int j;
			int t, max = 0, mode = 0;
			// loop to cycle through the now sorted aray to gather the information for calculating the mean and mode.
			for (j = 0; j < n; j++)
			{
				t = array_1[j];
				c = 0;
				sum += array_1[j];
				// if statement to find last cell which is now the largest cell.
				if (t == array_1[j]) c++; if (c > max)
				{
					mode = t;
				}
			}
			// Calculate the Mean or average of the array.
			mean = sum / n;
			// Mean print out.
			printf("The mean is: %lf \n", mean);
			// Mode print out.
			printf("mode is % d \n", mode);
			system("pause");
			break;



			//case function for unions and structures differences
		case 'f':

			printf("structure data:\n integer: %d\n" "decimal: %.2f\n name: %s\n", s.integer, s.decimal, s.name);
			printf("\nunion data:\n integer: %d\n" "decimal: %.2f\n name: %s\n", u.integer, u.decimal, u.name);
			
			// difference size of union and structure
			printf("\nsizeof structure : %d\n", sizeof(s));
			printf("sizeof union : %d\n", sizeof(u));
			system("pause");
			// difference five
			printf("\n Accessing all members at a time:\n");
			//injected integers and name
			s.integer = 100;
			s.decimal = 35;
			strcpy(s.name, "Kenneth Michika");
			printf("structure data:\n integer: %d\n " "decimal: %.2f\n name: %s\n", s.integer, s.decimal, s.name);
			system("pause");
			//injected integers
			u.integer = 100;
			u.decimal = 35;
			strcpy(u.name, "Kenneth Michika");
			printf("\nunion data:\n integer: %d\n " "decimal: %.2f\n name: %s\n", u.integer, u.decimal, u.name);
			system("pause");
			printf("\n Accessing one member at time:");
			printf("\nstructure data:");
			//injected integers
			s.integer = 240;
			printf("\ninteger: %d", s.integer);
			s.decimal = 120;
			printf("\ndecimal: %f", s.decimal);
			
			strcpy(s.name, "C programming");
			printf("\nname: %s\n", s.name);
			
			printf("\n union data:");
			//injected integers
			u.integer = 240;
			printf("\ninteger: %d", u.integer);

			u.decimal = 120;
			printf("\ndecimal: %f", u.decimal);
			
			strcpy(u.name, "C programming");
			printf("\nname: %s\n", u.name);
			system("pause");
			//Altering the value
			printf("\nAltering a member value:\n");

			s.integer = 4563;
			printf("structure data:\n integer: %d\n " " decimal: %.2f\n name: %s\n", s.integer, s.decimal, s.name);
			
			u.integer = 4563;
			printf("\nunion data:\n integer: %d\n" " decimal: %.2f\n name: %s\n", u.integer, u.decimal, u.name);

			system("pause");
			break;


			// Case function to run the code from the customer selection.
		case 'g':
			printf("Exiting!\n");
			system("pause");
			// Break from the case function to continue the loop.
			break;

			// Defaulting all other ansers that are entered during the menu to be print out invalid.
		default:
			// Testing to fix multiple menu option print outs.

			printf("invalid input\n");
			break;
			

		}
	}		// Ending of the loop if option e was slected, ending the program.
	while (menu_option != 'g'); 

	return 0;
}
