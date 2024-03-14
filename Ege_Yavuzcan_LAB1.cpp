#include<stdio.h>
#include<stdlib.h>


void mat_add(int m, int n, double *A,double *B,double *C){
	#define A(I,J) (*(A + (I)*n + (J)))
	#define B(I,J) (*(B + (I)*n + (J)))
	#define C(I,J) (*(C + (I)*n + (J)))
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			C(i,j) = A(i,j)+ B(i,j);
			printf("%f \t",C(i,j));
			
		}
		printf("\n");
	}
	
	#undef dA
	#undef dB
	#undef dC
	
	
}

void mat_mlt(int m,int n,int p,double *A,double *B,double *C){
	#define A(I,J) (*(A + (I)*n + (J)))
	#define B(I,J) (*(B + (I)*n + (J)))
	#define C(I,J) (*(C + (I)*n + (J)))
	
	printf("The Multiplication Matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			 C(i,j)=0;
			for(int k=0;k<p;k++){
			C(i,j) += A(i,k)*B(k,j);
			
			}
          
          
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%f  ",C(i,j));
		}
		printf("\n");
	}
	
	#undef dA
	#undef dB
	#undef dC
	
	
	
}
void mat_trnsps(int m,int n, double *A,double *B){
	#define A(I,J) (*(A + (I)*n + (J)))
	#define B(I,J) (*(B + (I)*n + (J)))	
	for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				B(j,i)=A(i,j);
			}
		}
	
	printf("Transpose of this matrix : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%f ",B(i,j));
		}
		printf("\n");
	}
	
	
	#undef dA
	#undef dB
}


int main(){
	// m=row n=column
	int m,n;
	int r1,c1,r2,c2;
	int state;
	// dA = (double*)malloc(m*n*sizeof(double));
	double *dA,*dB,*dC;
	dA = (double*)malloc(m*n*sizeof(double));
	dB = (double*)malloc(m*n*sizeof(double));
	dC = (double*)malloc(m*n*sizeof(double));
	#define dA(I,J) (*(dA + (I)*n + (J)))
	#define dB(I,J) (*(dB + (I)*n + (J)))
	#define dC(I,J) (*(dC + (I)*n + (J)))
	
	
	//free(dA);
	printf("Choose operation to proceed \n 1.Matrix Addition \n 2.Matrix Multiplication\n 3. Matrix Transpose \n 4.Symmetric matrix control");
	scanf ("%d", &state);
	switch(state){
		
		case 1:
			printf("Number of rows of the matrices");
			scanf("%d",&m);
			printf("Number of columns of the matrices");
			scanf("%d",&n);
			printf("Content of the first matrix \n");
			for(int i =0;i<m;i++){
				for(int j=0;j<n;j++){
					scanf("%lf",&dA(i,j));
				}
				printf("\n");
			}
			printf("Content of the second matrix \n");
			for(int i =0;i<m;i++){
				for(int j=0;j<n;j++){
					scanf("%lf",&dB(i,j));
					printf("\t");
					
				}
				printf("\n");
			}
			mat_add(m,n,dA,dB,dC);
			break;
		 
		
		case 2:
			printf("number of rows of the first operand matrix");
			scanf("%d",&r1);
			printf("number of columns of the first operand matrix");
			scanf("%d",&c1);
			printf("number of rows of the second operand matrix");
			scanf("%d",&r2);
			printf("number of columns of the second operand matrix");
			scanf("%d",&c2);
			if(r2 !=c1 ){
				printf("bu matris carpilamaz");
			}
			printf("Content of the first matrix \n");
			for(int i =0;i<r1;i++){
				for(int j=0;j<c1;j++){
					scanf("%lf ",&dA(i,j));
					
				}
				
			}
			printf("Content of the second matrix \n");
			for(int i =0;i<r2;i++){
				for(int j=0;j<c2;j++){
					scanf("%lf",&dB(i,j));
					
				}
				
			}
			mat_mlt(r1,c1,c2,dA,dB,dC);
			
			break;
			
			
			
		case 3:
			printf("Number of rows of the matrices");
			scanf("%d",&m);
			printf("Number of columns of the matrices");
			scanf("%d",&n);
			printf("Content of the first matrix");
			for(int i =0;i<n;i++){
				for(int j=0;j<m;j++){
					scanf("%lf",&dA(i,j));
				}
			}
			mat_trnsps(m,n,dA,dB);
			
			break;
			
		case 4:
			printf(" matrix equal function is not ready \n");
			break;
	
}

	free(dB);
	free(dC);
	free(dA);

	return 0;
}


