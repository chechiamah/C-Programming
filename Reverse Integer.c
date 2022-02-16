#include <stdio.h>

/* function declaration */
int reverseInt(int input);

int main()
{
    /** This is how your function will be tested. Actual test
     *  cases may vary. There is no need to use scanf(...) for 
     *  user input. Note this main() function won't be graded.
     **/ 
    printf("%d\n",reverseInt(1234)); /* 4321 */
    printf("%d\n",reverseInt(-1)); /* -1 */
    printf("%d\n",reverseInt(-15)); /* -51 */
    printf("%d\n",reverseInt(1000000009)); /* 0, because its reverse overflows */
    /* etc */ 
    
    return 0;
}

/* function definition */
int reverseInt(int input) {
    /* YOUR CODE HERE */
    int reversed = 0; 
    
    //while loop for each declaration of reverseInt() in main()
    while (input != 0) {
        int leftover = input % 10; 
        int newReversed = reversed * 10 + leftover;
        if ((newReversed - leftover) / 10 != reversed) {
            return 0;
        }
        reversed = newReversed;
        
        input = input / 10; 
    }
    
    return reversed; 
}
