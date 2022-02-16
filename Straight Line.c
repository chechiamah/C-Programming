#include <stdio.h>
#include <stdbool.h>


/* STEP 1: declare point structure */
struct point
{
   int x;
   int y;
};

/* STEP 2: declare function that takes this array as input
*/
bool isStraightLine(struct point* coordinates, int size);

/* -------------------------------------------------------
 * !!!   PLEASE DO NOT MODIFY THE ABOVE CODE   !!!
 * -------------------------------------------------------
*/

int main()
{
    /* NOTE: you can create any test input of your choice;
     * Test cases below are just examples 
    */
    
    /* TEST #1: create test input, c1 of size 6, manually */
    struct point c1[6];
    c1[0].x = 1;
    c1[0].y = 2; 
    c1[1].x = 2;
    c1[1].y = 3; 
    c1[2].x = 3;
    c1[2].y = 4; 
    c1[3].x = 4;
    c1[3].y = 5; 
    c1[4].x = 5;
    c1[4].y = 6; 
    c1[5].x = 6;
    c1[5].y = 7; 
    printf("%d\n", isStraightLine(c1, 6)); // prints 1 (true)

    /* TEST #2: create test input, c2 of size 1, manually */
    struct point c2[1];
    c2[0].x = 1;
    c2[0].y = 1; 
    printf("%d\n", isStraightLine(c2, 1)); // prints 1 (true)

    /* TEST #3: create test input, c3 of size 2, manually */
    struct point c3[2];
    c3[0].x = 1;
    c3[0].y = 1; 
    c3[1].x = 2;
    c3[1].y = 100; 
    printf("%d\n", isStraightLine(c3, 2)); // prints 1 (true)
    
    /* TEST #3: create test input, c4 of size 3, manually */
    struct point c4[3];
    c4[0].x = 1;
    c4[0].y = 1; 
    c4[1].x = 2;
    c4[1].y = 3; 
    c4[2].x = 3;
    c4[2].y = 11; 
    printf("%d\n", isStraightLine(c4, 3)); // prints 0 (false)

    /* etc ... */

    return 0;
}

/* function definition */
bool isStraightLine(struct point* coordinates, int size) {
    /* YOUR LOGIC HERE */
    int x0 = coordinates[0].x;
    int y0 = coordinates[0].y;
    int x1 = coordinates[1].x;
    int y1 = coordinates[1].y;

//Use the derivatives to calculate the slope at any given point 
    int dx = x1 - x0, dy = y1 - y0; 
    for(int i = 0; i < size; i++){
      int x = coordinates[i].x, y = coordinates[i].y;
      if (dx * (y - y1) != dy * (x - x1)){
        return 0; 
      }
    }
    return 1; 
}

