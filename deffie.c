#include<stdio.h>

int power(int num,int power){
    int temp=num;
    for(int i=1; i<power;i++){
        num=num*temp;
    }
return num;
}


int alpha(int q){
    int table[q+1][q+1], alpha=0,temp=0;
    for(int i=0;i<q;i++){
            for(int j=0;j<q;j++){
                table[i][j]=power(i,j)%q;
            }
    }
    
    for(int i=1;i<q;i++){
        temp=0;;
            for(int j=0;j<q;j++){
                for(int k=1; k<q;k++){
                    if(j==table[i][k]){
                        temp=temp+1;
                        break;                    
                    }
                    
                }
            }
            if(temp==q-1){
                alpha=i;
                break;
            }
        }

        //printf("%d\n",alpha);
        return alpha;
}

int public(int xa,int q){
        int ya=0;
        ya=power(alpha(q),xa)%q;
        return ya;

}

void key(int xa, int xb,int q){
    int ka=0,kb=0;
    ka=power(public(xb,q),xa)%q;
    kb=power(public(xa,q),xb)%q;
    printf("ka=%d \nkb=%d",ka,kb);
}


void main(){
int xa,xb,q;
    printf("Enter the value of xa: ");
    scanf("%d",&xa);
    printf("\nEnter the value of xb: ");
    scanf("%d",&xb);
    printf("Enter the value of q: ");
    scanf("%d",&q);
    key(xa,xb,q);
}

