#include<stdio.h>
void main(){
  int x = 2.5 % 3;
  printf("%d",x);
}

1. Error (compile time error)

//swap two numbers
  #include <stdio.h>
int main(){
    int  a;
    int  b;
    int  temp;
    scanf("%d",&a);
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}
