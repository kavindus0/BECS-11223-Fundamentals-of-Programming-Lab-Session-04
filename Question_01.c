#include <stdio.h>
//kavindu
//ec-22053
//galkotu-ec22053@stu.kln.ac.lk
int main(){
/*
 Subtract as num1 and num2 and store the result in the result variable.
 Print the result of the subtraction operator with an appropriate message.
 Multiply as num1 and num2 together and store the result in the result variable.
 Print the result of the multiplication operator with an appropriate message.
 Divide as num1 by num2 and store the result in the result variable. 
(Hint: Explicit type casting
might require getting the real number division)
 Print the result of the divisional operator with an appropriate message
*/


int num1, num2;
num1 = 5;
num2 = 4;
float result;
result = num1 + num2;
printf("result of sum %f\n",result);
result = num1 - num2;
printf("result of sub %f\n",result);
result = num1*num2;
printf("multiple is %d\n",num1*num2);
result = (float) num1 / num2;
printf("devision is %f\n",result);
return 0;
}