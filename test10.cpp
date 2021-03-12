#include <iostream>
#include "test10.h"
using namespace std;

void Calculator::Init(){
    cnt_add=0; cnt_div=0; cnt_min=0; cnt_tim=0;
}

float Calculator::Add(float a, float b){
    cnt_add ++;
    return a+b;
}

float Calculator::Min(float a, float b){
    cnt_min ++;
    return a-b;
}

float Calculator::Div(float a, float b){
    cnt_div ++;
    return a/b;
}

float Calculator::Tim(float a, float b){
    cnt_tim ++;
    return a*b;
}

void Calculator::ShowOpCount(){
    // cout<<"덧셈: "<<cnt_add;
    // "뺄셈: "<<cnt_min<<" 곱셈: "<<cnt_tim<<" 나눗셈: "<<cnt_div<<endl;
    cout<<cnt_add<<" "<<cnt_min<<" "<<cnt_div<<" "<<cnt_tim<<endl;
}