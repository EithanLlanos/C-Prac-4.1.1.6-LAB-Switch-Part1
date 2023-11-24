//Scenario
//Write a program that asks the user to enter the number of a month, and prints the name of that month on the screen.
//When the number does not correspond to a month(less than 1 or greater than 12), the program prints : Error: no such month in my calendar..
//If you can't remember all the names (and of course to speed up your programming), here is a list:
//
//1 : January
//2 : February
//3 : March
//4 : April
//5 : May
//6 : June
//7 : July
//8 : August
//9 : September
//10 : October
//11 : November
//12 : December
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//12
//
//Expected output
//December
//
//Sample Input
//2
//
//Expected output
//February
//
//Sample Input
//15
//
//Expected output
//Error : no such month in my calendar.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int v1=0;
	printf("Please enter a number: \n");
	scanf_s("%d", &v1);
	switch (v1) {
	case 1: printf("January"); break;
	case 2: printf("February"); break;
	case 3: printf("March"); break;
	case 4: printf("April"); break;
	case 5: printf("May"); break;
	case 6: printf("June"); break;
	case 7: printf("July"); break;
	case 8: printf("August"); break;
	case 9: printf("September"); break;
	case 10: printf("October"); break;
	case 11: printf("November"); break;
	case 12: printf("December"); break;
	default: printf("Error: No such month in calendar."); break;
		return 0;
	}
	
}

//1 : January
//2 : February
//3 : March
//4 : April
//5 : May
//6 : June
//7 : July
//8 : August
//9 : September
//10 : October
//11 : November
//12 : December