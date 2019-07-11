#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
  int a=rand()%6+1;
  int b=rand()%6+1;
  char name[70];

  
  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello,%s!\n",name);

  printf("Rolling the dice...\n");
  printf("Die 1:%d\n",a);
  printf("Die 2:%d\n",b);
  int total=a+b;
  printf("Total value:%d\n",total);


  return 0;
}
