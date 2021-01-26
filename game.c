#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swg(char you,char comp){
    if(you==comp){
        return 0;
    }

    if(you=='s' && comp =='g'){
        return -1;
    }
    else if(you=='g' && comp =='s'){
        return 1;
    }

    if(you == 'w' && comp == 'g'){
        return 1;

    }
    else if(you == 'g' && comp =='w'){
        return -1;
    }
    if(you == 's' && comp == 'w'){
        return -1;
    }
    else if(you == 'w' && comp =='s'){
        return 1;
    }

    else{
        return 0;
    }
}
int main(){
 int number;   
char you, comp;
srand(time(0));
number = rand()%100+1;
if(number<33){
    comp = 's';
}
else if(number<33 && number>66){
   comp ='w';
}
else{
    comp ='g';
}
printf("enter 's' for snake/n, 'w' for water/n, 'g' for gun/n");
scanf("%c", &you);
int result = swg(you, comp);
printf("you chose %c and computer chose %c", you, comp);
if(result==0){
   printf("game draw!\n");
}
else if(result==1){
    printf("you win!/n");
}
else{
    printf("you lose/n");
}
    return 0;
}