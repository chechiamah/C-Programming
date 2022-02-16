#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* preprocessor definitions for true and false */
#define true 1
#define false 0

/* function declaration */
int isPalindrome(char input[]);

int main()
{
    /* your test cases can be done like this */
    printf("%d", isPalindrome("11"));    /* 1 */
    printf("%d", isPalindrome("A B a")); /* 1 */
    printf("%d", isPalindrome("AB"));    /* 0 */
    printf("%d", isPalindrome("a"));     /* 1 */
    printf("%d", isPalindrome(" "));     /* 0 */
    
    /* 1, we don't count non-alphanumeric characters, 
       so input is really A */
    printf("%d", isPalindrome("!A!!!!"));
 
    /* etc */

    return 0;
}

/* function defintion */
int isPalindrome(char input[]) {
    
    
    int len; 
    int flag = 1; 
    len = strlen(input); 
    char a[len], i ;
    int j = (len - 1);

    if(input[0] == 32){
      return 0;
    }
 
    for(i = 0; i <len; i++) {
      a[i] = tolower(input[i]);



      if(!isalnum(input[i])) {
        int i = (isalnum(input[i]))- (!isalnum(input[i])); 
        return 1; 
      }

      
    }

    if (!isalpha(input[i]) && !isspace(input[i])) {
      for (i = 0; i < len/2; i++){
      
      if(a[i] != a[j]){
        flag = 0;
        break; 

      }
      j--;
    }


    }
  return flag; 
  }


