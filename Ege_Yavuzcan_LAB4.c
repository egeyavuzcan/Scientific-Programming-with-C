#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

double polysum(int order, double array[MAXSIZE],double x){
	int f0 = 0;
	
	
	for(int i = 0;i<order+1;i++){
		//printf("%lf",array[i]);
		if(i ==0){
			f0 = f0 + ( array[i] * x * x * x);
		}
		else if(i==1){
			f0 =  f0 + ( array[i] * x * x);
		}
		else if(i==2){
			f0 =  f0 + ( array[i] * x );
		}
		else{
			f0 = f0 + (array[i] * 1);
		}
	}
	return f0;
}

double derivative_polysum(int order,double array[MAXSIZE],double x){
	int g0=0;
	for(int i = 0;i<order+1;i++){
		//printf("%lf",array[i]);
		if(i ==0){
			g0 = g0 + ( 3 * array[i] * x * x );
		}
		else if(i==1){
			g0 =  g0 + (2 * array[i] * x);
		}
		else if(i==2){
			g0 =  g0 + ( array[i]);
		}
	}
	return g0;
	
}
double Newton_method(int order,double array[MAXSIZE],double x0,double epsilon,int N){
	int g0;
	int f0;
	
	/*
	f0 = polysum(order,array,x0);
	//printf("f0 = %d \n",f0);
	g0 = derivative_polysum(order,array,x0);
	printf("g0 = %d \n",g0);*/
	for(int i =0;i<N;i++){
		
		f0 = polysum(order,array,x0);
		printf(" ITERATION %d X0=%lf f(x0) = %d",i,x0,f0);
		x0 = x0 - ( polysum(order,array,x0) / derivative_polysum(order,array,x0));
		if(derivative_polysum(order,array,x0)==0){
			printf("ROOT FOUND at %lf",x0);
		}
		//printf("g0 a bunu yolluyorum %lf ",x0);
		g0 = derivative_polysum(order,array,x0);
		printf(" X1 = %lf f(x1) = %d \n",x0,g0);
		
	}
} 

int main(){
	int order;
	int N,x0;
	float tolerable_error;
	double *coefficents;
	printf(	"Enter the order/degree of the polynomial : ");
	scanf("%d",&order);
	printf("Enter the coefficents of the polynomial : ");
	coefficents = malloc(sizeof(double)*(order+1));
	for(int i = 0;i<order+1;i++){
		scanf("%lf",&coefficents[i]);
	}
	printf("Given the polynomial is : ");
	for(int i = 0;i<order+1;i++){
		printf("%lf x^%d ",coefficents[i],order-i);
	}
	printf("\nEnter the tolerable error ; ");
	scanf("%f",&tolerable_error);
	printf("Enter the max number of iterations,N : ");
	scanf("%d",&N);
	printf("Enter the initial point, x0: ");
	scanf("%d",&x0);
	Newton_method(order,coefficents,x0,tolerable_error,N);
	return 0;
}
