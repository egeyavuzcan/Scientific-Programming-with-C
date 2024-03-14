#include <stdio.h>
#include <stdlib.h>
int main(){
	int order;
	double *coefficents;
	int root;
	float root_value;
	printf(	"Enter the order/degree of the polynomial : ");
	scanf("%d",&order);
	printf("Enter the coefficents of the polynomial : ");
	coefficents = malloc(sizeof(double)*(order+1));
	for(int i = 0;i<order+1;i++){
		scanf("%lf",&coefficents[i]);
	}
	printf("Given the polynomial is : ");
	for(int i = 0;i<order+1;i++){
		printf("%lfx^%d ",coefficents[i],order-i);
	}
	printf("Input interval values(x_{L},x_{U}) and step size : ");
	double *x;
	x = malloc(sizeof(double)*(3));
	for(int i = 0;i<3;i++){
		scanf("%lf",&x[i]);
	}
	int sonuc,sonuc2;
	for(int i = 0;i<order+1;i++){
		sonuc += coefficents[i] * ( x[0] * (order-i) * (order-i));
	}
	for(int i = 0;i<order+1;i++){
		sonuc2 += coefficents[i] * ( x[1] * (order-i) * (order-i));
	}
	if(sonuc * sonuc2 <0 ){
		
		printf("X_{L} * X_{U} < 0 condition True ");
		printf("x[0]=%f x[2]=%f",x[0],x[2]);
		root_value = x[0] + x[2];
		//printf("ilk root value %f",root_value);
		for(float i=root_value;i<x[1]; i += x[2]){
			//hesaplayýcý for
			for(int j =0;j<order+1;j++){
				//printf("root value %d ile iþlem yapýyorum \t ",i);
				root += coefficents[j] * ( (i) * (order-j) * (order-j));
			}
			if(root == 0){
				printf(" Root found %f \n", root_value);
			}
			root = 0;
		}
	}
	
	
}
double polysum(int num, double array[10],double x){

	
	
}

