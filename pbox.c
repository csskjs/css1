#include<stdio.h>

int *transpose(int column,int matrix[8][8]){
    static int row[8];
    for(int i=0;i<8;i++){
        row[7-i]=matrix[i][column];
        //printf("%d\t ",row[i] );
    }
//    printf("\n");
    return row;
}


void main(){
    int matrix[8][8]={ 1,0,0,1,0,1,1,0,
                          0,1,1,1,0,1,0,0,
                       1,1,1,1,1,1,1,1,
                       0,1,0,1,0,1,0,1,
                       1,0,0,0,0,0,1,1,
                       0,0,0,0,0,0,0,0,
                       1,1,0,0,1,1,0,0,
                       1,1,0,0,1,1,0,0};
    int i=0,j=4,k=0,z=0,x=0;
    int per[8][8];    
    int temp[8];           
    
    while(i<8){
        if(i%2==0){
            //transpose(i,matrix);;
            for(z=0;z<8;z++){
                per[j][z]=transpose(i,matrix)[z];            }
            j++;
        }
        else if(i%2!=0){
            //printf("entered ");
        //    temp=transpose(i,matrix);
            for(z=0;z<8;z++){
                per[k][z]=transpose(i,matrix)[z];
            }
            k++;
        }
        i++;
        
    }

for(i=0;i<8;i++){
    for(x=0;x<8;x++){
        printf("%d\t",per[i][x]);
    }
    printf("\n");
}

}

