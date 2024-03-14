#include <stdio.h>
#include <stdlib.h>
double fpower(double x);
double trapezodial(double (*f)(double),double a,double b,int n);
double simpson(double (*f)(double),double a,double b,int n);
double r_rectangular(double (*f)(double),double a,double b,int n);
double l_rectangular(double (*f)(double),double a,double b,int n);
int main(){
	int initial,final;
	printf("Please enter initial value ; ");
	scanf("%d",&initial);
	printf("Please enter final value ; ");
	scanf("%d",&final);
}

double fpower(double x){
	
	
}
double r_rectangular(double (*f)(double),double a,double b,int n){
	
}
double l_rectangular(double (*f)(double),double a,double b,int n){
	
}

double trapezodial(double (*f)(double),double a,double b,int n){
	double answer, h;
	int i;
	answer = f(a)/2;
	h = (b-a)/n;
	for(i=1;i<=n;i++){
		answer += f(a+i*h);
	}
	answer -= f(b)/2;
	return (h*answer);
}

double simpson(double (*f)(double),double a,double b,int n){
	double answer, h,x;
	int i;
	answer = f(a);
	h = (b-a)/n;
	for(i=i;i<=n;i++){
		x=a+i*h;
		answer+= (4*f(x-h/2) + 2*f(x));
	}
	answer -= f(b);
	return (h*answer/6);
}
