#include<stdio.h>
void main(){
      int month;
      printf("Enter the month in sequence from [ 1 - to - 12] for which you want to check the \n day's  count:  for\n");
        scanf("%d",&month);
        switch(month){
            case 1: 
                printf("You have selected January \n");
                printf("This month contains %d Day's",31);
                break;
            case 2: 
                printf("You have selected Feburary please enter the year for which you want to check the days\n");
                int year;
                scanf("%d",&year);
                if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
                      printf("This is a ****LEAP YEAR**** contains %d Day's\n",29);
                  }else {
                      printf("This is ****not a LEAP YEAR**** contains %d Day's\n",28);
                  }
                break;
            case 3: 
                 printf("You have selected March \n");
                printf("This month contains %d Day's",31);
                break;
            case 4: 
                 printf("You have selected April \n");
                printf("This month contains %d Day's",30);
                break;
            case 5: 
                printf("You have selected May \n");
                printf("This month contains %d Day's",31);
                break;
            case 6: 
                 printf("You have selected June \n");
                printf("This month contains %d Day's",30);
                break;
            case 7: 
                printf("You have selected July \n");
                printf("This month contains %d Day's",31);
                break;
            case 8: 
                printf("You have selected August \n");
                printf("This month contains %d Day's",31);
                break;
            case 9: 
                 printf("You have selected September \n");
                printf("This month contains %d Day's",30);
                break;
            case 10: 
                printf("You have selected October \n");
                printf("This month contains %d Day's",31);
                break;
            case 11: 
                printf("You have selected November \n");
                printf("This month contains %d Day's",30);
                break;
            case 12: 
                printf("You have selected December \n");
                printf("This month contains %d Day's",31);
                break;
            default : 
            printf("Invalid month entered");
            break;
        }
    }
