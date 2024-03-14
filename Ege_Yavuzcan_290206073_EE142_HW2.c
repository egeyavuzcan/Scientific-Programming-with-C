#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("please enter n value \n");
	scanf("%d",&n);
	int *A,*B,*C,*D,*E,*F,*G;
	
	A = malloc(sizeof(int)*pow(2,n));
	B = malloc(sizeof(int)*pow(2,n));
	C = malloc(sizeof(int)*pow(2,n));
	int B_sayac = 1,C_sayac = 1,D_sayac = 1,E_sayac=1,F_sayac=1,G_sayac=1;
	B[0]=0;
	if(3<=n & 7>=n){
		for(int i =0;i<pow(2,n);i++){
			if(i%2 == 0 & i!=0 & B_sayac ==1){
				B[i]=1;
				B[i+1]=1;
				B_sayac=0;
					}
			else if(i%2 == 0 & i!=0 & B_sayac ==0){
				B_sayac=1;
				B[i]=0;
				B[i+1]=0;
					}				
	}			
		for(int i =0;i<pow(2,n);i++){
			if(i % 2 ==1){
				A[i] = 1;
					}
			else{
				A[i] = 0;
					}							
	}
		for(int i =0;i<pow(2,n);i+=4){
			if(C_sayac==1){
				C[i]=0;
				C[i+1]=0;
				C[i+2]=0;
				C[i+3]=0;
				C_sayac =0;
					}
			else if (C_sayac ==0){
				C[i]=1;
				C[i+1]=1;
				C[i+2]=1;
				C[i+3]=1;
				C_sayac=1;
					}
					}
	}
	switch(n){
		case 3:
			break;
		case 4:
			D = malloc(sizeof(int)*pow(2,n));
			for(int i=0;i<pow(2,n);i+=8){
				if(D_sayac ==1){
					for(int j=0;j<8;j++){
						D[j]=0;
}
					D_sayac=0;
				}
				else if(D_sayac ==0){
					D_sayac=1;
					for(int j=8;j<16;j++){
						D[j]=1;
						}
				}		
				}
			
			break;
		case 5:
			D = malloc(sizeof(int)*pow(2,n));
			D[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 8 == 0 & i!=0 & D_sayac == 1){
					D_sayac=0;
					for(int j=0;j<8;j++){
						D[i+j]=1;
					}
				}
				else if(i % 8 == 0 & i!=0 & D_sayac == 0){
					D_sayac=1;
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
					
				}
			}
			E = malloc(sizeof(int)*pow(2,n));
			E[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 16 == 0 & i!=0 & E_sayac == 1){
					E_sayac=0;
					for(int j=0;j<16;j++){
						E[i+j]=1;
					}
				}
				else if(i % 16 == 0 & i!=0 & E_sayac == 0){
					E_sayac=1;
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
			}
			break;
		case 6:
			
			D = malloc(sizeof(int)*pow(2,n));
			D[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 8 == 0 & i!=0 & D_sayac == 1){
					D_sayac=0;
					for(int j=0;j<8;j++){
						D[i+j]=1;
					}
				}
				else if(i % 8 == 0 & i!=0 & D_sayac == 0){
					D_sayac=1;
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
			}
				else if(i==0){
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
					
				}
				
			}
			E = malloc(sizeof(int)*pow(2,n));
			E[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 16 == 0 & i!=0 & E_sayac == 1){
					E_sayac=0;
					for(int j=0;j<16;j++){
						E[i+j]=1;
					}
				}
				else if(i % 16 == 0 & i!=0 & E_sayac == 0){
					E_sayac=1;
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
			}
			F = malloc(sizeof(int)*pow(2,n));
			for(int i =0;i<pow(2,n);i++){
				if(i % 32 == 0 & i!=0 & F_sayac == 1){
					F_sayac=0;
					for(int j=0;j<32;j++){
						F[i+j]=1;
					}
				}
				else if(i % 32 == 0 & i!=0 & F_sayac == 0){
					F_sayac=1;
					for(int j=0;j<32;j++){
						F[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<32;j++){
						F[i+j]=0;
					}
				}
			}
			break;
		case 7:
			D = malloc(sizeof(int)*pow(2,n));
			D[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 8 == 0 & i!=0 & D_sayac == 1){
					D_sayac=0;
					for(int j=0;j<8;j++){
						D[i+j]=1;
					}
				}
				else if(i % 8 == 0 & i!=0 & D_sayac == 0){
					D_sayac=1;
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<8;j++){
						D[i+j]=0;
					}
				}
			}
			E = malloc(sizeof(int)*pow(2,n));
			E[0]=0;
			for(int i =0;i<pow(2,n);i++){
				if(i % 16 == 0 & i!=0 & E_sayac == 1){
					E_sayac=0;
					for(int j=0;j<16;j++){
						E[i+j]=1;
					}
				}
				else if(i % 16 == 0 & i!=0 & E_sayac == 0){
					E_sayac=1;
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<16;j++){
						E[i+j]=0;
					}
				}
			}
			F = malloc(sizeof(int)*pow(2,n));
			for(int i =0;i<pow(2,n);i++){
				if(i % 32 == 0 & i!=0 & F_sayac == 1){
					F_sayac=0;
					for(int j=0;j<32;j++){
						F[i+j]=1;
					}
				}
				else if(i % 32 == 0 & i!=0 & F_sayac == 0){
					F_sayac=1;
					for(int j=0;j<32;j++){
						F[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<32;j++){
						F[i+j]=0;
					}
				}
			}
			G = malloc(sizeof(int)*pow(2,n));
			for(int i =0;i<pow(2,n);i++){
				if(i % 64 == 0 & i!=0 & G_sayac == 1){
					G_sayac=0;
					for(int j=0;j<64;j++){
						G[i+j]=1;
					}
				}
				else if(i % 64 == 0 & i!=0 & G_sayac == 0){
					G_sayac=1;
					for(int j=0;j<64;j++){
						G[i+j]=0;
					}
				}
				else if(i==0){
					for(int j=0;j<64;j++){
						G[i+j]=0;
					}
				}
			}
			break;
		default:
            printf("Please enter correct number(3-7)");
	}
	if(3<= n & 7>=n){
		//printf("ifdeyimmmm");
		printf("TRUTH TABLE \n ----------------------------- \n");
		for(int i =0;i<pow(2,n);i++){
			printf("%d \t",i);
			if(n>3){
				if(n==7){
					printf("%d ",G[i]);
					printf("%d ",F[i]);
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==6){
					printf("%d ",F[i]);
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==5){
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==4){
					printf("%d ",D[i]);
				}
			}
			printf("%d ",C[i]);
			printf("%d ",B[i]);
			printf("%d \n",A[i]);
		}
		int minterms[128];
		int minterms_2[128];
		int deger=0;
		for(int i =0;i<128;i++){
			minterms[i]=-1;
		}	
		while(1){
			
			printf("Enter the minterms at which the function is true -1 to exit");
			scanf("%d",&minterms[deger]);
			if(minterms[deger]==-1){
				break;
			}
			deger++;	
			
			
		}
		for(int i =0;i<64;i++){
			
			if(minterms[i]==0){
				//minterms_2[0 ] = 1;
			}
		}
		minterms[60]=-1;
		minterms[56]=-1;
		minterms[54]=-1;
		minterms[53]=-1;
		minterms_2[66]=0;
		minterms_2[2]=0;
		for(int i=0;i<128;i++){
			for(int j=0;j<128;j++){
				if(i==minterms[j] ){ //&& minterms[j]!= 0
					//printf("Minterm : %d , j : %d",i,j);
					minterms_2[i] = 1;
				}
			}
		}
		for(int i=0;i<128;i++){
			if(minterms_2[i]!=1){
				minterms_2[i]=0;
			}
		}
		printf("\nTRUTH TABLE \t \t F \n----------------------------- \n");
		for(int i =0;i<pow(2,n);i++){
			printf("%d \t",i);
			if(n>3){
				if(n==7){
					printf("%d ",G[i]);
					printf("%d ",F[i]);
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==6){
					printf("%d ",F[i]);
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==5){
					printf("%d ",E[i]);
					printf("%d ",D[i]);
				}
				else if(n==4){
					printf("%d ",D[i]);
				}
			}
			printf("%d ",C[i]);
			printf("%d ",B[i]);
			printf("%d ",A[i]);
			printf("\t%d\n",minterms_2[i]);
		}
		
	}
	
	
}

