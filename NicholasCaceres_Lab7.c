//Nicholas Caceres
//4/16/2020
//Lab 7
//COP 2220 06

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE1 25
#define SIZE2 4
#define SIZE3 100

void Q1 (void);
void Q2 (void);
void Q3 (void);

int main()
{
    Q1();
    Q2();
    Q3();
    return 0;
}

void Q1 (void)
{
    double numfrc[SIZE1]={0};
    numfrc[13]=6.666;
    numfrc[14]=-6.666;
    numfrc[9]=1.667;
    numfrc[6]=3.333;
    double i;
    printf("%.2f and %.2f\n", numfrc[14], numfrc[9]);
    for (i=0; i<SIZE1; ++i){
        printf("%4.0f%8.3f\n", i, numfrc[SIZE1]);
    }

}

void Q2 (void)
{
    int intable[SIZE2][SIZE2];
    int i,j;
    printf("\nThis array contains %d elements.\n", sizeof(intable)/sizeof(intable[SIZE2][SIZE2]));
    for (i=0; i<SIZE2; i++){
        for (j=0; j<SIZE2; j++){
            printf("%10d", intable[SIZE2][SIZE2]);
        }
        printf("\n");
    }

}

void Q3 (void)
{
    int b[SIZE3] = { 0 };
    int i;
    for ( i = 0; i <= SIZE3; i++ ) {
            b[ i ] = 1;
    }
    int a[ 2 ][ 2 ] = { { 1, 2, 3 }, { 3, 4 } };
    a[ 1, 1 ] = 5;
}



