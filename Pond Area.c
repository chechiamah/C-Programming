#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) (((x) > (y)) ? (x) : (y))
#define MIN(x,y) (((x) < (y)) ? (x) : (y))

/* function declaration */
int getMaxPond(int*, int);

int main() {
   /* Your function will be tested with random input such as 
    * the following. Actual test cases will be different.
    */ 
   int arr[] = {22,31,1,23};
   
   printf("%d", getMaxPond(arr, sizeof(arr)/sizeof(arr[0]))); // 66
   // ...
   return 0;
}

/* function definition */
int getMaxPond(int* arr, int n) {
    /* YOUR CODE HERE */
    int leftTop = arr[0];
    int rightTop = arr[n-1];
    int amount = MIN(leftTop, rightTop) * (n - 1); 
    int leftIndex = 0;
    int rightIndex = n - 1; 

    
      //printf("%d\n", amount);
    if(leftTop <= rightTop) {
      leftIndex++; 
      if(arr[leftIndex] > leftTop) {
        leftTop = arr[--leftIndex];
        amount = MAX(amount, MIN(leftTop, rightTop) * (rightIndex - leftIndex));
          
        }
    else if (leftTop > rightTop) { 
      rightIndex--; 
      if(arr[rightIndex] > rightTop) {
        rightTop = arr[++rightIndex];
        amount = MAX(amount, MIN(leftTop, rightTop) * (rightIndex - leftIndex));
        }
      }
  } else {
    leftIndex++;
    rightIndex--;
  }
    return amount; 
}
  


