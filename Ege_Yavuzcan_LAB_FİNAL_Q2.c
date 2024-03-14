#include<stdio.h>
#include<stdlib.h>
void mat_trnsps(int m,int n, double *A,double *B);
void mat_mlt(int m,int n,int p,double *A,double *B,double *C);
#define A(I,J) (*(A + (I)*n + (J)))
#define B(I,J) (*(B + (I)*n + (J)))
#define C(I,J) (*(B + (I)*n + (J)))
int main(){
	while(1){
		printf("Which programme you want to choose 1-Multiplication,2-Transpose,-1-Exit");
		int islem;
		scanf("%d",&islem);
		int row1,column1;
		int row2,column2;
		int n,m;
		if(islem==-1){
			break;
		}
		else if(islem ==1){
			double *A,*B,*C;
			
			printf("please enter first matrix row and column value");			
			scanf("%d",&row1);
			scanf("%d",&column1);
			printf("please enter second matrix row and column value");
			
			scanf("%d",&row2);
			scanf("%d",&column2);
			A = (double*)malloc(row1*column1*sizeof(double));
			for(int i=0;i<row1;i++){
				for(int j=0;j<column1;j++){
					printf("please enter %d.row %d.column of matrix1 \n",i+1,j+1);
					scanf("%lf",&A(i,j));
				}
			}
			
			B=(double*)malloc(row2*column2*sizeof(double));
			for(int i=0;i<row2;i++){
				for(int j=0;j<column2;j++){
					printf("please enter %d.row %d.column of matrix2 \n",i+1,j+1);
					scanf("%lf",&B(i,j));
				}
				printf("\n");
			}
			for(int i=0;i<row1;i++){
				for(int j=0;j<column1;j++){
					printf("%lf \t",A(i,j));
				}
				printf("\n");
			}
			for(int i=0;i<row2;i++){
				for(int j=0;j<column2;j++){
					printf("%lf \t",B(i,j));
				}
				printf("\n");
			}
			if(column1!=row2){
				//ERROR MESSAGE
				printf("column1 is not equal row2 . This matrix can not multi");
			}
			else{
				//CORRECT MESSAGE
				printf("column1 is equal row2 . This matrix can multi");
				C=(double*)malloc(row1*column2*sizeof(double));
				mat_mlt(row1,column1,column2,A,B,C);
				printf("\n");
			}
				
			}
			
		
		else if(islem==2){
			double *A,*B;
			printf("please enter first matrix row and column value");			
			scanf("%d",&row1);
			scanf("%d",&column1);
			n=row1;
			A = (double*)malloc(row1*column1*sizeof(double));
			for(int i=0;i<row1;i++){
				for(int j=0;j<column1;j++){
					printf("please enter %d.row %d.column of matrix1 \n",i+1,j+1);
					scanf("%lf",&A(i,j));
				}
			}
			B=(double*)malloc(row1*column1*sizeof(double));
			mat_trnsps(row1,column1,A,B);
			
		}
		else{
			printf("please enter correct value \n");
			
		}
		
		
	}
	
	
}


void mat_mlt(int m,int n,int p,double *A,double *B,double *C){
	int i,j,k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			C(i,j)=0;
			for(int k=0;k<p;k++){
			C(i,j) += A(i,k) * B(k,j);
			}
		}	
	}
	printf("multip matrix : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lf  ",C(i,j));
		}
		printf("\n");
	}
	
}
void mat_trnsps(int m,int n, double *A,double *B){

	for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				B(j,i) = A(i,j);
			}
			
		
		}
	
	
	printf("Transpose matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%lf ",B(i,j));
		}
		printf("\n");
		
	}	
}
	
