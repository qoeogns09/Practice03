#include<iostream>

using namespace std;

class Parent{
    public:
        virtual void v_print() {
            cout<< "parent"<<endl;
        }
        void print() {
            cout<<"parent"<<endl;
        }
};

class Child : public Parent {
    public:
        virtual void v_print() {
            cout<< "child"<<endl;
        }
        void print() {
            cout<<"child"<<endl;
        }
};

int main() {
    Parent * pp[3];
    Child c;
    pp[0] = new Parent();
    pp[1] = new Child();
    pp[2] = &c;

    pp[0]->v_print();
    pp[1]->v_print();

    pp[0]->print();
    pp[1]->print();

    pp[2]->v_print();
    pp[2]->print();

    cout<<(void *)pp[0]<<endl;
    cout<<(void *)pp[1]<<endl;
    cout<<(void *)pp[2]<<endl;

    return 0;
}