#include<iostream>
#include<cstring>

using namespace std;

namespace COMP_POS{
    enum {CLERK, SENIOR, ASSIST, MANAGER};

    void ShowPositionInfo(int pos){
        switch(pos)
        {
        case CLERK:
            cout<<"사원"<<endl;
            break;
        case SENIOR:
            cout<<"주임"<<endl;
            break;
        case ASSIST:
            cout<<"대리"<<endl;
            break;
        case MANAGER:
            cout<<"과장"<<endl;
        }
    }
}

class NameCard{
    private:
        char *name;
        char *company;
        char *p_num;
        int position;
    public:
        NameCard(const char *a,const  char *b,const  char *c, int i): position(i){  // const를 넣어줘야 char *str 에 strcpy실행할때 오류없음
            name= new char[strlen(a)+1];
            company= new char[strlen(b)+1];
            p_num= new char[strlen(c)+1];
            strcpy(name, a);
            strcpy(company, b);
            strcpy(p_num, c);
        }
        void ShowNameCardInfo(){
            cout<<"이름: "<<name<<endl;
            cout<<"회사: "<<company<<endl;
            cout<<"전화번호: "<<p_num<<endl;
            cout<<"직급: "; COMP_POS::ShowPositionInfo(position);
            cout<<endl;
        }

        NameCard(const NameCard& copy) : position(copy.position)
        {
            name=new char[strlen(copy.name)+1];
            strcpy(name, copy.name);
            company=new char[strlen(copy.company)+1];
            strcpy(company, copy.company);
            p_num=new char[strlen(copy.p_num)+1];
            strcpy(p_num, copy.p_num);
        }
    
        ~NameCard(){
            delete []name;
            delete []company;
            delete []p_num;
            cout<<"called destructor!"<<endl;
        }
};

int main(){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1=manClerk;
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2=manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
    return 0;
}