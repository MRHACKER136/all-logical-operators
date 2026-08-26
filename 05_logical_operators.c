#include <stdio.h>
int main() {

    int a= 1 ; int b =1;

    printf("The value of a and b %d\n ", a&&b);
    //first one is  and %% operator and it equals to if 1 and 1 is there then it returns 1 otherwise 0
    
    printf("The value of a or b %d\n" , a||b) ;
    //second one is or || operator and it equals to if 1 or 1 is there then it returns 1 otherwise 0

    printf("The value of not(a) %d\n", !a);
    //third one is not ! operator and it equals to if 1 is there then it returns 0 otherwise 1
    
    if (a&&b) {

        printf("they both are true\n") ;
    }
    
   if (a) {
      if (b) {
          printf("both are true\n") ;
      }
   }
     
   return 0 ;
}