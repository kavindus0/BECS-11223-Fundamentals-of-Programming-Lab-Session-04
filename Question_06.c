#include <stdio.h>
#define PI 3.14159

//kavindu
//ec-22053
//galkotu-ec22053@stu.kln.ac.lk

int main(){
int x = 10;
int y = 20;
int z = 30;
int a = x++ + 10;
int b = --x - x--;
int c = ++x - ++y - ++z;
int d = ++y * ++y;
printf("a = %d b = %d c = %d d = %d\n",a,b,c,d);return 0;
}