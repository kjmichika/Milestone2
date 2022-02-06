#include <stdio.h>
#include "Math.h"
// function to sort the array in ascending order
void Array_sort(int* array, int n)
{
	// declare some local variables
	int i = 0, j = 0, temp = 0;

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
/* This program is to illustrate simple math algorithms that users can select. 
 *The options will repeat till the user decides to quit with the quit option ‘e’  */
int main(void)
{
	// Assigning variables for the simple math options
	int a, b;
	char menu_option;
	float c;
	// declare two int arrays
	int array_1[100] = { 0 };
	// declare some local variables
	int i = 0, n = 0;
	float median = 0;
	do {
		// This is the menu option giving you a variaty to choose from.
		printf("Please select a math program option.\n");
		printf("Would you like to..... \n");
		printf("\n");
		printf("a. Add two numbers together\n");
		printf("b. Subtract two number from each other.\n");
		printf("c. Get the product of two numbers.\n");
		printf("d. Get the quotient of two numbers.\n");
		printf("e. Make an array (up to 100 cells) rearrange the cells in order and get the mean, median, and mode of the array. \n");
		printf("f. Quit.\n");
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
			// Sort the array in ascending order
			Array_sort(array_1, n);

			// Now pass the sorted array to calculate
			// the median of your array.
			median = Find_median(array_1, n);

			printf("\nThe median is: %f\n", median);
			double sum = 0, mean;
			int j;
			int t, max = 0, mode = 0;
			for (j = 0; j < n; j++)
			{
				t = array_1[j];
				c = 0;
				sum += array_1[j];
				if (t == array_1[j]) c++; if (c > max)
				{
					mode = t;
				}
			}
			mean = sum / n;
			printf("The mean is: %lf \n", mean);
			printf("mode is % d \n", mode);
			system("pause");
			break;
			
			// Case function to run the code from the customer selection.
		case 'f':
			printf("Exiting!\n");
			system("pause");
			// Break from the case function to continue the loop.
			break;
	
			// Defaulting all other ansers that are entered during the menu to be print out invalid.
		default:
			// Testing to fix multiple menu option print outs.
			if (menu_option != 'a')
			{
				printf("invalid input\n");
				break;
			}
		}
	}		// Ending of the loop if option e was slected, ending the program.
		while (menu_option != 'f');
	
	return 0;
}