#include <stdio.h>
    
int main()
{
    int year;
    printf("Enter the year for your calendar: ");
    scanf("%d", &year);
    
    /* YOUR CODE HERE */
    int firstDay (int year) {
    int day;
        day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
        return day;
}


    int day, monthDay, daysMonth, weekday, startDay, month;

    char *months[]= {"JANUARY","FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    
    int mthDays[] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4==0) && (year % 100 != 0))
    {
      mthDays[1] = 29; 
    }
    startDay = firstDay(year); 
    for (month = 0; month <12; month++)
    {
      daysMonth = mthDays[month]+1;
      printf("\n\n%s                        %d", months[month], year);
      printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT\n");
      
      for (weekday = 0; weekday < startDay; weekday++) {
        printf ("     ");
      }
      for (day = 1; day < daysMonth; day++){
        printf("%5d", day);
        if(++weekday > 6){
          printf("\n");
          weekday = 0;
        }
        startDay = weekday;
      }
    } 


    return 0;
}