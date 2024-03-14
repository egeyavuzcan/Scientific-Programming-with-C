#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double g_function(double Vc0,double R ,double C ,double Vs);
double y_exact(double t,double R ,double C ,double Vs);
double euler(double to,double Vc0,double(*g)(double,double,double,double),double h ,double tlast,double R,double C ,double Vs);
double Error(double yex, double yeu);
int main(){
	double t0,Vc0,R,C,Vs,t_last;
	printf("input respectiveliy \n t0 \t Vc0 \n");
	scanf("%lf",&t0);
	scanf("%lf",&Vc0);
	printf("input respectiveliy \n R \t C \t V \n");
	scanf("%lf",&R);
	scanf("%lf",&C);
	scanf("%lf",&Vs);
	printf("input respectiveliy step size : \n");
	double h1,h2,h3;
	printf("h1: ");
	scanf("%lf",&h1);
	printf("\nh2 : ");
	scanf("%lf",&h2);
	printf("\nh3: ");
	scanf("%lf",&h3);
	printf("input t_last : ");
	scanf("%lf",&t_last);
	double yex1,yeu,yex2,yex3;
	double er1,er2,er3;
	yeu = y_exact(t_last,R,C,Vs);
	yex1 = euler(t0,Vc0,*g_function,h1,t_last,R,C,Vs);
	er1 = Error(yex1,yeu);
	yex2= euler(t0,Vc0,*g_function,h2,t_last,R,C,Vs);
	er2 = Error(yex2,yeu);
	yex3 = euler(t0,Vc0,*g_function,h3,t_last,R,C,Vs);
	er3 = Error(yex3,yeu);
	printf("exact voltage: %lf \n",yeu);
	printf("Persentage error for h1=0.1 : %lf \n",er1);
	printf("Persentage error for h2=0.01 : %lf \n",er2);
	printf("Persentage error for h3=0.001 : %lf \n",er3);
	
}
double g_function(double Vc0,double R ,double C ,double Vs){
	double value;
	value = (1 / R * C ) * (Vs - Vc0);
	return value;
	
}
double y_exact(double t_last,double R ,double C ,double Vs){
	double value2;
	value2 = Vs * ( 1 - exp(- t_last /( R * C)));
	return value2;
}
double euler(double t0,double Vc0,double(*g)(double,double,double,double),double h ,double t_last,double R,double C ,double Vs){
	for(t0;t0<t_last;t0+=h){
		Vc0 = Vc0 + (h * g(Vc0,R,C,Vs));
	}
	return Vc0;

}
double Error(double yex, double yeu){
	double value3;
	value3 = fabs((yex - yeu)/yex)*100;
	return value3;
	
}
