#include<stdio.h>
int main(){
int N =0;
printf("Enter a Number: ");
printf("\n");
scanf("%d",&N);
int i = 1;
/*while(i <= N){
  printf("N = %d\n", i);
  i++;
}*/

int j = 1;
while(N >= j){
  printf("N = %d\n", N);
  N--;
}
}

