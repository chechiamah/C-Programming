#include <stdio.h>

/**
* PURPOSE: this console program breaks the total number of pennies into 
*          respective USD and CAN denominations, and prints the string buffer
*          containing the entire formatted output string to the console display
* PARAMETERS:
*     	None
* RETURN VALUES:
*     	None
*/
int
main ()
{
  int numPennies = 0;
  printf ("Please enter all of your pennies: ");
  scanf ("%d", &numPennies);

 // Declare the variables and make the change and currency units whole numbers
  int change_1, change_2, change_3, change_4, dollar, quarter, dime, nickel,
    penny;
    
 //Declare and make the CAD values have decimal places 
  float Canadian;

//Declare a variable with every division
  dollar = (numPennies / 100);

  change_1 = numPennies - (dollar * 100);
  quarter = change_1 / 25;

  change_2 = change_1 - (quarter * 25);
  dime = change_2 / 10;

  change_3 = change_2 - (dime * 10);
  nickel = change_3 / 5;

  change_4 = change_3 - (nickel * 5);
  penny = change_4 / 1;

  // USD to CAD Conversion
  Canadian = dollar * 1.33;


//Printing
  printf ("In US Currency you have: ");
  printf ("%d dollars, ", dollar);
  printf ("%d quarters, ", quarter);
  printf ("%d dimes, ", dime);
  printf ("%d nickels, and", nickel);
  printf (" %d pennies.\n", penny);
  printf ("In Canadian currency you have: %f dollars.", Canadian);

  return 0;
}
