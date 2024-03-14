#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
void first_node();
//void instert_node(measurement *x,char q[N],char u[N]);
//void print_node(measurement *y);
//measurement *delete_node(measurement *z,int number);
struct measurement{
	char parameter[N];
	char unit[N];
	int num;
	struct measurement *nextPtr;
};
typedef struct measurement measurement; //STRUCT BELÝRTMEK ÝÇÝN BÝDAHA BÝDAHA STCURT DEMEYE GEREK KALMIYO BUNUN SAYESÝNDE
measurement *head = NULL;

int main(){
}
void first_node(){	
}
void instert_node(measurement *x,char q[N],char u[N]){	
}
void print_node(measurement *y){
}
measurement *delete_node(measurement *z,int number){
}
