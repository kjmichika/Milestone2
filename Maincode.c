#include <stdio.h>
/* This program is to illustrate simple math algorithms that users can select. 
 *The options will repeat till the user decides to quit with the quit option ‘e’  */
int main(void)
{
	// Assigning variables for the simple math options
	int a, b;
	char menu_option;
	float c;
	do {
		// This is the menu option giving you a variaty to choose from.
		printf("Please select a math program option.\n");
		printf("Would you like to..... \n");
		printf("\n");
		printf("a. Add two numbers together\n");
		printf("b. Subtract two number from each other.\n");
		printf("c. Get the product of two numbers.\n");
		printf("d. Get the quotient of two numbers.\n");
		printf("e. Quit.\n");
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
				exit(-1);
			}
			// Calculating the quotient of the two numbers in a float for decimal answers.
			c = a / (float)b;
			printf(stderr, "\nThe quotient result is: %f\n", c);
			// A pause from the program to review the results.
			system("pause");
			// Break from the case function to continue the loop.
			break;
			// Case function to run the code from the customer selection.
		case 'e':
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
		while (menu_option != 'e');
	
	return 0;
}
