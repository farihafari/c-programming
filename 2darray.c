
#include <stdio.h>

int main()
{
    // 2D array declaration
    int disp[2][3];
    // counter variable for loop
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter value for employ Salary[%d][%d]",i,j);
            scanf("%d",&disp[i][j]);
        }
    }
    // displaying array
    printf("2D Array elements\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",disp[i][j]);
        if(j==2){
            printf("\n");
        }
        }
    }
    return 0;
}
