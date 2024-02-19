#include<stdio.h>
int main(){
int A, B,C;
printf("Enter first number:  ");
  scanf("%d",&A);
  printf("\n ");

printf("Enter second number:  ");
  scanf("%d",&B);
  printf("\n ");

printf("Enter third number:  ");
    scanf("%d",&C);
    printf("\n ");
if(A > B  &&  A>C) {
  printf("[  %d ] A is greaterRRRRRR",A);
}else if(B> A && B > C){
  printf("[ %d  ] B is greaterRRRRRRRR", B);
}else if(C > A && C> B){
  printf(" [ %d ] C is GREATERRRRRRRRRRRR",C);
}

return 0;
}
