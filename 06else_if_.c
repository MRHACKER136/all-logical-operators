#include <stdio.h>
 int main(){

    int age = 65 ;
    if  (age>600
    )
    {  
        printf("you are eligible to drive\n") ;
    }
     
    else if (age<42){
    
     printf("you are eligible to drive but you are not old enough to drive a car") ;
     } 
     
     else if (age>60)
{    
        printf("you are eligible to drive but you  are too old to drive a car") ;
     }

     else{

              printf("you are  not eligible to drive ");
            }
            
            return 0 ;
        }
