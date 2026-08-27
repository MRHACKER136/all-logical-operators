#include <stdio.h>
int main() {

/*
90 – 100 ⇒ A
80 – 90 ⇒ B
70 – 80 ⇒ C
60 – 70 ⇒ D
50 – 60 ⇒ E
<50 ⇒
*/


char grade;
int marks = 46;

if (marks >= 90 && marks <= 100) {
     grade = 'A';
}
else if (marks >= 80) {
     grade = 'B'; 
}
else if (marks >= 70) {
     grade = 'C'; 
}
else if (marks >= 60) {
     grade = 'D'; 
}else if (marks >= 50) {
     grade = 'E'; 
} 
else 
    grade = 'F';

 return 0 ;   
}