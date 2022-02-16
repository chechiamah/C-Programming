#include <stdio.h>

int main ()
{
  long long phoneNumber;
  
    /* Add more variables as needed */
  // List the variables for the area code, exchange code, and line number 

  int areaCode, exchangeCode, lineNumber;

  printf ("Enter a 10 digit number:");
  scanf ("%lld", &phoneNumber);

    /* Your code here. */
  //modules for area code, exchange code, and line number
  
  areaCode = phoneNumber / 10000000;

  exchangeCode = (phoneNumber / 10000) % 1000;

  lineNumber = phoneNumber % 10000;


  printf ("(%d)", areaCode);
  printf (" %d-", exchangeCode);
  printf ("%d\n", lineNumber);

  return 0;
}
