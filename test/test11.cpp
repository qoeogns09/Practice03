#include<iostream>
#include<cstring>
using namespace std;

class Printer{
    private:
        char str[30];
    public:
        void SetString(char *str1);
        void ShowString();
};

void Printer::SetString(char *str1){
    strcpy(str, str1);
}

void Printer::ShowString(){
    cout<<str<<endl;
}

int main(void){
    Printer pnt;
    pnt.SetString((char *)"Hello world!");
    pnt.ShowString();

    pnt.SetString((char *)"I love C++");
    pnt.ShowString();
    return 0;
}