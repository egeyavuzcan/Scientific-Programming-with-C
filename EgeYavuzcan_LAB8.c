#include <math.h>
#include <stdio.h>
#include <stdlib.h>


struct stackNode{
		char data;
		struct stackNode *nextPtr;
		
	};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr,char info);
char pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
	
int main(){
	char *sentence;
	gets(&sentence);
	puts(&sentence);
	StackNode *p;
	struct stackNode sentence3;
	sentence3.data = sentence;
	for(p=sentence3.data;p<25;p++){
		printf("%c",p);
	}
	//sentence3.data = sentence;
	
}
char pop(StackNodePtr *topPtr){
	
}
void push(StackNodePtr *topPtr,char info){
		
}
int isEmpty(StackNodePtr topPtr){
	
}
