//#include<iostream>
//using namespace std;
//
//int main(void){
//	
//})

#include <assert.h>

//struct stack {
//	int data[100];
//	int top;
//};
//
//void push(struct stack S, int a);
//int pop(struct stack S);
//int isEmpty(struct stack S);

struct stack {
	int data[100];
	int top;
	void push(int a);
	int pop(void);
	bool isEmpty(void);
};

//void push(struct stack S, int a){
//	assert(S.top < 100);
//	S.data[S.top] = a;
//	S.top++;
//}
//
//int pop(struct stack S){
//	assert(S.top > 0 );
//	return S.data[--S.top];
//}
//
//int isEmpty(struct stack S){
//	return S.top == 0 ? 1 : 0;
//}
//
void stack::push(int a){
	assert(top < 100);
	data[top] = a;
	top++;
}

int stack::pop(void){
	assert(top > 0 );
	return data[--top];
}

bool stack::isEmpty(void){
	return top == 0 ? true : false;
}
