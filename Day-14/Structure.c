#include<stdio.h>
struct student {
int id;
char name[20];
int age;
int roll;
};
struct student fetchStudentDetails(){
struct student STUDENT;
  printf("Enter student id ");
  scanf("%d",&STUDENT.id);
  printf("Enter student name ");
  scanf("%s",STUDENT.name);
  printf("Enter student age ");
  scanf("%d",&STUDENT.age);
  printf("Enter student roll ");
  scanf("%d",&STUDENT.roll);
  return STUDENT;
}
struct student displayStudentDetails(struct student s){
printf("Student id %d \n",s.id);
printf("Student name %s \n",s.name);
printf("Student age %d \n",s.age);
printf("Student roll %d ",s.roll);
 printf("\n");
  printf("********===========*********");
}
void main(){
int noOfStudents=1;
struct student student;
printf("How many students details you want to enter: ");
scanf("%d",&noOfStudents);
int i = 0;
int N = noOfStudents;
while(noOfStudents > 0) {
  student = fetchStudentDetails();
  printf("\n");
  noOfStudents--;
}

i = 0;
while(N > 0) {
  printf("\n");
  displayStudentDetails(student);
  printf("\n");
  N--;
}
}
