#include <stdio.h>
//A C program that creates a multiplication table of a given number

int main(){
    printf("What number would you want to deal with?\n");
    int NumChoice;
    scanf("%d",&NumChoice);
   system("cls");//to clear the screen and only display the  table
    printf("MULTIPLCATION TABLE FOR: %d \n",NumChoice);
int Multiplier=0;
for( Multiplier=0;Multiplier<11;Multiplier++){
    int Product=NumChoice*Multiplier;
    printf("%d * %d = %d\n",NumChoice,Multiplier,Product);
}
return 0;
}
