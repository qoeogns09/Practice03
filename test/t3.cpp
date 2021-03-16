#include<iostream>

using namespace std;

class Circle{
    private:
        double radius;
        string color;
    public:
        double getRadius();
        double getArea();
};

class SoccerPlayer{
    private:
        int number;
        string name;
        int x, y;
    public:
        void run();
        void kickBall();
};

class Person{
    private:
        string name;
        string id;
    public:
        // Person(string a, string b){
        //     name =a;
        //     id = b;
        // }
        Person(string a, string b): name(a), id(b){}
        void print(){
            cout<<name<<endl;
        }
        void printID(){
            cout<<id<<endl;
        }
};

class Student : public Person{
    private:
        string major;
    public:
        Student(string a, string b, string c) : Person(a,b), major(c){}
        void print(){
            cout<<major<<endl;
        }
        // void changeMajor(const string& newMajor);
};

int main(){
    Person p("hjnam", "123");
    p.print();

    Student s("hjnam", "345", "CS");
    s.print();
    s.printID();
    return 0;
}