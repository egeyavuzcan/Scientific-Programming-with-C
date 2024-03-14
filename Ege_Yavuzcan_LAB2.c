#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TempM(i,j) *(TempM+i*(r)+j)
#define Mat(I,J) (*(Mat + (I)*r + (J)))
void posdef(double *Mat,int r){
	double det;

	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			printf("%f \t",Mat(i,j));
		}
		printf("\n ");
	}
	
	//printf(" first det %d",det);
}
double determinant(double *Mat, int r){
	double det=0;
	double temp;
	int i,j,k,c=0;
	if(r==1){
		det = Mat(0,0);
	}
	else{
		double *TempM;
		TempM = malloc(sizeof(double)*(r-1)*(r-1));
		for(k=0;k<r;k++){
			c=0;
			for(i=0;i<r;i++){
				for(j=0;j<r;j++){
					if(i!=0 && j!=k){
						TempM((c/(r-1)),(c%(r-1))) = Mat(i,j);
						c++;
					}
				}
			}
		temp = determinant(TempM,r-1);
		if(0==(k%2)){
			det += temp*Mat(0,k);
		}
		else{
			det-= temp*Mat(0,k);
		}
		
		}
		free(TempM);
	}
	return det;
}

int main(){
	double *matrix;
	int matrix_size;
	int i=0,j=0;
	double det;
    printf("Enter the matrix size (for example, enter 3 for 3x3 matrix) \n ");
    scanf("%d",&matrix_size);
	matrix = (double*)malloc(matrix_size*matrix_size*sizeof(double));
	#define matrix(I,J) *(matrix + (I)*matrix_size + (J))
	printf("enter the matrix coefficents one by one ");
	for(int i =0;i<matrix_size;i++){
				for(int j=0;j<matrix_size;j++){
					scanf("%lf",&matrix(i,j));
				}
			}
	det = determinant(matrix,matrix_size);
	//
	printf("Determinant = %lf \n",det);
	
	//printf("general determinant : %d",det);
	//posdef(matrix,matrix_size);
    return 0;
}
