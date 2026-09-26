#include <stdio.h>

int main() {
    int steps = 0;
    int total_steps = 0;
    int days = 0;
    printf ("DAILY STEP TRACKER\n");
    printf ("\nEnter -1 to exit.\n\n");
    
    while (steps != -1) {
     printf("Enter step count: ");
     scanf ("%d", &steps);
     if (steps != -1) {
         if (steps > 0) {
           total_steps = total_steps + steps;
         days++; 
         } else {
             printf ("Invalid input! Steps cannot be negative.\n");
         }
         
     }
    }
   printf ("\nTotal Steps: %d\n",total_steps);
   printf ("Total Days Recorded: %d\n",days);
   if (days>0) {
       float average = (float) total_steps / days;
       printf ("Daily Average Steps: %.2f\n",average);
   } else {
       printf ("No valid entries recorded. Average cannot be calculated.\n");
   }
   return 0;
}