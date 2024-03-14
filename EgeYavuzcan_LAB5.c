#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define a 0
#define b 20

double ve = 866.04929;
double f1(double x);
double f2(double x);
double rectangular(double (*f)(double), int n);
double trapezoidal(double (*f)(double), int n);
int *number_of_panels_generator();
double absolute(double va,double ve);
double relative(double va,double ve);
double persentage(double va,double ve);

int main(){
	printf("\t \t \t Rect f1 Rect f2 Rect area Abs Error Rela error Per error");
	for(int i =100; i<1001;i+=100){
		printf("\nNumber of panels:%d | \t %d \t %d \t %d \t %d \t %d \t %d ",i,rectangular(*f2,i),rectangular(*f2,i),0,absolute(rectangular(*f2,i),ve),relative(rectangular(*f2,i),ve),persentage(rectangular(*f2,i),ve));
		
	}
	printf("\t \t \t \t Trap f1 Trapf2 Trap area Abs Error Rela error Per error");
	for(int i =100; i<1001;i+=100){
		printf("\nNumber of panels:%d | \t %d \t %d \t %d \t %d \t %d \t %d ",i,trapezoidal(*f1,i),trapezoidal(*f1,i),0,absolute(trapezoidal(*f1,i),ve),relative(trapezoidal(*f1,i),ve),persentage(trapezoidal(*f1,i),ve));
		
	}
}

double f1(double x){
	int f1;
	f1 = (0.5)  * (exp(0.2 * x)) + 20;
	return f1;
}

double f2(double x){
	int f2;
	f2 = (0.01) * (x * x * x) + 50;
	return f2;
}

double rectangular(double (*f)(double), int n){
	int h;
	int value;
	h = ((b - a) / n);
	for(int i =0;i<n;i++){
		value += f2(i);
	}
	
	return value;
}
double trapezoidal(double (*f)(double), int n){
	int h;
	int value;
	h = ((b - a) / n);
	for(int i =0;i<n;i++){
		value += f1(i) - f2(i);
	}
	return value;
}

int *number_of_panels_generator(){
	
}

double absolute(double va,double ve){
	double absolute;
	absolute = ve - va;
	if(absolute<0){
		absolute = absolute * -1;
	}
	return absolute;
}
double relative(double va,double ve){
	double relative;
	relative = ( (ve - va) / ve );
	if(relative<0){
		relative = relative * -1;
	}
	return relative;
}
double persentage(double va,double ve){
	double persentage;
	persentage = ( (ve - va) / ve );
	if(persentage<0){
		persentage = persentage * -1;
	}
	persentage = persentage * 100;
	return persentage;
	
}
