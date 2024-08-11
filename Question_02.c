#include <stdio.h>
//kavindu
//ec-22053
//galkotu-ec22053@stu.kln.ac.lk
int main(){
/*
 2. Write a C program to determine an employee weekly salary based on the following information.
• Employee regular hourly pay rate is Rs. 250.00.
• Employee overtime pay rate is Rs. 300.00.
• Assume that employee worked 40 regular working hours and 15 overtime hours.
• Then, calculate the total weekly pay for the employee worked for 47 hours and display it with an
appropriate message. (Note: In this program, you do not need to consider the if else statements.)
Copy your completed C program in to the MS Word document
*/


const float num1 = 250;
const float num2= 300;
int employeeWorkHour = 47;
float payment = 40*250+(employeeWorkHour-40)*300;
printf("Full Payment is %f",payment);
return 0;
}