#include <stdio.h>

int main()
{
    /* YOUR CODE HERE; PLEASE REMEMBER TO PRINTF THE OUTPUT
     * TO RECEIVE YOUR EXTRA CREDIT AS INDICATED IN IT.
    */
    int num;
    
    scanf("%d", &num); 
   
    
    char *str = (char*)&num; 
    
    
    for(int i = 0; i < 4; i++){
        printf("%c", str[i]);
        
    }
    
    return 0;
}