#include<iostream>
using namespace std;

class Progression {
    protected:
        long first;
        long cur;
    protected:
        virtual long firstValue();
        virtual long nextValue();
    public:
        Progression(long f= 0) : first(f), cur(f) {}
        virtual ~Progression(){}
        void printProgression(int n);
};

void Progression::printProgression(int n){
    cout << firstValue();
    for(int i =2; i<=n; i++)
        cout<<' '<<nextValue();
    cout<<endl;
}
long Progression::firstValue() {
    cur = first;
    return cur;
}
long Progression::nextValue(){
    return ++cur;
}

class FibonacciProgression : public Progression{
    public:
        FibonacciProgression(long f = 0, long s = 1);
    protected:
        virtual long firstValue();
        virtual long nextValue();
    protected:
        long second;
        long prev;
};

FibonacciProgression::FibonacciProgression(long f, long s) : Progression(f), second(s), prev(second - first){}

long FibonacciProgression::firstValue(){
    cur = first;
    prev = second - first;
    return cur;
}

long FibonacciProgression::nextValue(){
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
}


int main(){
    FibonacciProgression FibonacciProgression(3,4);
    FibonacciProgression.printProgression(7);
    return 0;
}