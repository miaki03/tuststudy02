#include <stdio.h>
#define CM_PER_IN 2.54
#define IN_PER_FT 12.0
#define KG_PER_LB 0.453
int main( void ){
    double cm, total_in, inches, kg, lb;
    int feet;
    printf( "Enter a height in centimeters: " );
    scanf( "%lf" , &cm);
    if(cm<=0)return 0;
    printf( "Enter a weight in kilograms: " );
    scanf( "%lf" , &kg);
    while (cm > 0){
        total_in = cm / CM_PER_IN;
        feet = ( int )(total_in / IN_PER_FT);
        inches = total_in - feet * IN_PER_FT;
        lb=kg/KG_PER_LB;
        printf("      cm    feet  inches      kg      lb\n");
        printf( "%8.2f%8d%8.2f%8.2f%8.2f\n" , cm, feet, inches, kg, lb);
        printf( "Enter next height (<=0 to quit): " );
        scanf( "%lf" , &cm);
        if(cm<=0)return 0;
        printf( "Enter a weight in kilograms: " );
        scanf( "%lf" , &kg);
    }
    return 0;
}