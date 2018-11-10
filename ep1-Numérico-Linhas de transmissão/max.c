#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int AchaMaiorValor(int A[n][n],int n){
    int i,k,max;
    for(l=k;l<n;l++){
        for(i=k;i<n+1;i++){
            if(abs(A[i][k])>abs(A[i-1][k]))
                max = A[i][k];
        }
        if(abs(A[l][k])== max)
            return max;
    }
}


int main(){
    int maximo,i,j;
    int B[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            B[i][j]= B[i][j] + 1;
            printf("%d",B[i][j]);
        }
    }

    maximo = AchaMaiorValor(B[3][3],3);
    printf("%d", maximo);



    return 0;
}
