#include <stdio.h>
#define PI 3.14159
//kavindu
//ec-22053
//galkotu-ec22053@stu.kln.ac.lk
int main(){
/*
. Write a C program to determine the area and the circumference of a circle of radius 12.
𝐴𝑟𝑒𝑎 𝑜𝑓 𝑎 𝑐𝑖𝑟𝑐𝑙𝑒 = 𝜋𝑟
2
Circumference of a circle = 2πr
For the above calculations, create PI as a constant and assign the value 3.14519 to it.
*/
float radius = 12;

printf("circumfurance is %f\n",2*PI*radius);

printf("area is %f",radius*PI*radius);

return 0;
}