#include<stdio.h>
int main(){
    /*my first programme in c*/
     char name[100],home[100],food[100];
     printf("Enter your name \n");
     scanf("%s",&name);
     printf("where do you come from? \n");
     scanf("%s",&home);
     printf("what is your favourite food? \n");
     scanf("%s",food);
     printf("My name is %s \n ",name);
     printf("I come from %s \n ",home);
     printf("My favourite food is %s \n ",food);
     return 0;

}
