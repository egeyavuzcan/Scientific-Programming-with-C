#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//LÝNKED LÝST KULLANAMADIM O YÜZDEN NORMAL YAPTIM HOCAM

float f(float x);
float Derivative(float x);
float Forward_Diff(float x);
float Backward_diff(float x);
float Centered_diff(float x);

struct Node{
		char diff_method[4];
		float n_diff;
		float a_diff;
		float error;
		struct Node *nextPtr;
	};
	typedef struct Node Num_Diff;
	
int main(){
	printf("Enter the function variable 'X' ");
	float x;
	scanf("%f",&x);
	printf("Numerical Derivative Method \t Numerical Solution \t Analytic Solution \t Error(%) \n");
	printf("--------------------------  \t ------------------ \t ---------------- \t ------ \n");
	printf("Forward Difference \t \t %f \t \t %f \t \t %f \n",Forward_Diff(x),f(x),(Forward_Diff(x)-f(x))/100);
	printf("Backward Difference \t \t %f \t \t %f \t \t %f \n",Backward_diff(x),f(x),(Backward_diff(x)-f(x))/100);
	printf("Centered Difference \t \t %f \t \t %f \t \t %f \n",Centered_diff(x),f(x),(Centered_diff(x)-f(x))/100);
	//Num_Diff.n_diff = f(x);

	//LÝNKED LÝST KULLANAMADIM O YÜZDEN NORMAL YAPTIM HOCAM
}
float f(float x){
	float result;
	result = ((x-3) * (x-3) ) + 1;
}
float Derivative(float x){
	float result;
	result = (2 * (x - 3) );
	return result;
}
float Forward_Diff(float x){
	float h;
	h = 0.001;
	float result;
	result = (f(x + h) - f(x)) / h;
	return result;
}
float Backward_diff(float x){
	float h;
	float result;
	h = 0.001;
	result = (f(x) - f(x- h)) / h;
	return result;
}
float Centered_diff(float x){
	float h;
	float result;
	h = 0.001;
	result = (f(x+h) - f(x- h)) / (2 * h);
	return result;
}
void print_node(Num_Diff *y){
	
}
