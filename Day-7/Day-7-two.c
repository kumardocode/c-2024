#include<stdio.h>
int main(){
int x = 5;
printf("First : %d\n",x); //  5            5
x++;   // x = x+1
printf("Second : %d\n",x);  //  6             6
++x; // x = x+1
printf("Third: %d\n",x);   // 7

int y = 10;
printf("First : %d\n",y);  //  10     10
y--;   // x = x-1
printf("Second : %d\n",y); //  11   9
--y; // x = x-1
printf("Third: %d",y);  //  12     8
}

