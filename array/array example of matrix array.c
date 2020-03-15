#include <stdio.h>
#include <conio.h>

 main()
 {
b     int i,j;
    int F[2][2];
        F[0][0] =1;
        F[0][1] =2;
        F[1][0] = 3;
        F[1][1]= 4;

        for(i=0;i<2;i++){
        for(j=0;j<2;j++){

            printf("%d\n", F[i][j]);
        }
        printf("\n");
        }
    getch();
 }




