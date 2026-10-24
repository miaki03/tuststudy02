#include<stdio.h>
#define MIN_PER_HOUR 60
int main(void){
    int minutes,hours;
    printf("Enter a time in minute: ");
    scanf("%d",&minutes);
    while(minutes>0){
        hours=minutes/MIN_PER_HOUR;
        minutes=minutes%MIN_PER_HOUR;
        printf("%d Hours %d Minutes\n",hours,minutes);
        printf("Enter next time (<=0 to quit): ");
        scanf("%d",&minutes);
    }
    return 0;
}