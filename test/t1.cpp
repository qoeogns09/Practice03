#include<iostream>

namespace H1{
    int doSomething(int x, int y){
        return x+y;
    }
}

namespace H2{
    int doSomething(int x, int y){
        return x-y;
    }
}

int main(){
    // std::cout<<doSomething(4,3);
    return 0;
}