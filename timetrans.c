#include<stdio.h>
#define HOUR 60
int main(void){
    int minutes,hours;
    while(1){
        scanf("%d",&minutes);
        if(minutes<=0)break;
        hours=minutes/HOUR;
        minutes=minutes%HOUR;
        printf("%d Hours %d Minutes\n",hours,minutes);
    }
    return 0;
}