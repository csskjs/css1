#include<stdio.h>

int main(){
    int i,j,b=0;
    
    int s1[4][16] = {14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,
                     0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
                     4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,
                     15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13 };

    int input[1][6];
    int output[4];

    printf("Enter the input: ");
    for(i=0; i < 1; i++){
        for (int j = 0; j < 6; j++){
            scanf("%d", &input[i][j]);
        }
    }
    int row, column;
 
    row = input[0][0]*2 + input[0][5];
 
    column = input[0][1]*8 + input[0][2]*4 + input[0][3]*2 + input[0][4];
 
    int decimal_output = s1[row][column];

    printf("The decimal ouput is: %d\n", decimal_output);

    while(decimal_output > 0){
        output[b] = decimal_output % 2;
        decimal_output = decimal_output / 2;
        b++;
    }

    printf("The output is: ");
    for (int i = 0; i < 4; i++){
        printf("%d", output[i]);
    }
    printf("\n");
    return 0; 
}

