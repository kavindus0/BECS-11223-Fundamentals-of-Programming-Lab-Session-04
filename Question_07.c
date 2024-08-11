#include <stdio.h>
#define PI 3.14159

//kavindu
//ec-22053
//galkotu-ec22053@stu.kln.ac.lk

int main(){
int num[3] = {10,-20,-30};
for(int i = 0; i<3; i++){
(num[i]>0)?printf("%d\n",-num[i]):printf("%d\n",-num[i]);
}
return 0;
}