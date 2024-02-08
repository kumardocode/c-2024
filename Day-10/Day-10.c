#include<stdio.h>
int main() {
  //if (1)  {
	//printf("Hello\n");
	//printf("%d",2+3);
  //}

  /*if (1)  {
	printf("Hello\n");
	printf("%d",2+3);
  }*/

  //int minAge = 18;
  //int rahulAge = 17;
  //int mohanAge = 22;

  /*if(rahulAge > minAge) {
    printf("He can give vote");
  }else {
    printf("He is not eligible to give vote");
  }*/
  int minAge = 18;
  int votersAge;
  scanf("Enter voters age: %d",&votersAge);
  if(votersAge > minAge) {
    printf("Can give vote");
  }else  if(votersAge < minAge){
    printf("not eligible to give vote");
  }else {
      printf("No one can give vote: Try next time");
  }
  return 0;
}
