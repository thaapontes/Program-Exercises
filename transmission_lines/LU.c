#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float** decomposeLU(float** A){
    int k,i,j,c;
    int l,t;
    double max;
    double* p = malloc((n+2) *sizeof(double));
    for(int f=1;f<n+2;f++){
        p[f]=0;
    }

    for (k=1;k<n;k++){
        for(i=k;i<n;i++){
            for(j=1;j<k-1;j++){
                c = c + A[i][j]*A[j][k];
            }
            A[i][k]=A[i][k] - c;
        }
    }
    for (l=k;l<n;l++){
        for(i=k;i<n+1;i++){
            if(abs(A[i][k])>abs(A[i-1][k]))
                max = A[i][k];
        }
        if(abs(A[l][k])== max)
            t = l;
            p[k]=l;
    }
}



int main(){
    float** A;
    int n=2;
    int i,j;
    printf("hola");
    A = (float**)malloc(n*sizeof(double*));
    for(i = 0;i<n; i++){
            A[i] = (float*)malloc(n*sizeof(double));
    }

    //for(i=0;i<n;i++){
     //   for(j=0;j<n;j++){
       //     A[i][j] = 0;
      //  }
   // }


    return 0;
}
