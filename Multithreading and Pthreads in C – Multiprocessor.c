#include <stdio.h>
#include <pthread.h>
void *charge(void *p){printf("Charger %d: EV charging\n",*(int*)p);return 0;}
int main(){pthread_t t1,t2;int a=1,b=2;
pthread_create(&t1,0,charge,&a);pthread_create(&t2,0,charge,&b);
pthread_join(t1,0);pthread_join(t2,0);
printf("EV charging tasks completed\n");return 0;}
