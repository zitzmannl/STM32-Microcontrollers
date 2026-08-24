#include <stdio.h> 

int main() {
	
	// Bank of Boston hires you to develop a program for their system.
	// Their requirements are presented as follows
	//	Verify user's password to access banking system
	//	The password is 1234
	//	if user entered incorrect password for 3 times, this program will be exited

	unsigned short passcode;
	unsigned char failureCount = 0;

	printf("Welcome to Bank of Boston.\n");

	do {
		printf("\nPlease enter your passcode: ");
		scanf_s("%hu", &passcode);

		if (passcode == 1234) {
			printf("\nAccess Granted\n");
			break;
		}

		else {
			failureCount++;
			printf("\nAccess Denied");
			printf("\nAttempts Left: %hhu", 3 - failureCount);
		}
	} while (failureCount < 3);

	if (failureCount == 3) {
		printf("\nToo Many Attempts.");
		return 0;
	}

	//	if user entered correct password, program would present a greeting text and ask user to choose an option
	float balance = 1000.0f;
	unsigned char choice;
	float deposit;
	float withdrawAmount;

	printf("\nBank of Boston\n");

	do {
		printf("\nPlease Select From the Following:");
		printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Add Yearly Interest\n5. Exit");
		printf("\nChoice: ");
		scanf_s("%hhu", &choice);

		if (choice == 1) {
			printf("\nPlease enter deposit amount: $");
			scanf_s("%f", &deposit);

			if (deposit > 0) {
				balance = balance + deposit;
				printf("Your new balance is: $%.2f\n", balance);
			}
			else {
				printf("Invalid Amount.\n");
			}
		}

		else if (choice == 2) {
			printf("\nPlease enter withdrawal amount: $");
			scanf_s("%f", &withdrawAmount);

			if (withdrawAmount < balance && withdrawAmount > 0) {
				balance = balance - withdrawAmount;
				printf("Your new balance is: $%.2f\n", balance);
			}
			else {
				printf("Invalid Amount.\n");
			}
		}

		else if (choice == 3) {
			printf("\nYour Current Balance is: $%.2f", balance);
		}

		else if (choice == 4) {
			balance = 0.03 * balance + balance;
			printf("\nYour New Balance With interest is: $%.2f", balance);

		}
	} while (choice != 5);

	return 0;
}