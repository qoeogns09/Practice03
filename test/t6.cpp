#include<iostream>
#include<cstring>
using namespace std;

class MyFriendInfo
{
    private:
        char * name;
        int age;
    public:
        MyFriendInfo(const char * n1, int ag): age(ag)
        {
            name = new char[strlen(n1)+1];
            strcpy(name, n1);
        }
        void ShowMyFriendInfo()
        {
            cout<<"이름: "<<name<<endl;
            cout<<"나이: "<<age<<endl;
        }
        ~MyFriendInfo()
        {
            delete []name;
        }
};

class MyFriendDetailInfo : public MyFriendInfo
{
    private:
        char * addr;
        char * phone;
    public:
        MyFriendDetailInfo(const char * n1, int ag,const char * n2,const char * n3): MyFriendInfo(n1, ag)
        {
            addr=new char[strlen(n2)+1];
            strcpy(addr, n2);
            phone=new char[strlen(n3)+1];
            strcpy(phone, n3);
        }
        void ShowMyFriendDetailInfo()
        {
            ShowMyFriendInfo();
            cout<<"주소: "<<addr<<endl;
            cout<<"전화: "<<phone<<endl<<endl;
        }
        ~MyFriendDetailInfo()
        {
            delete []addr;
            delete []phone;
        }
};

int main()
{
    MyFriendDetailInfo fren1("김진성", 22, "충남 아산", "010-1234-00XX");
    MyFriendDetailInfo fren2("이주성", 19, "경기 인천", "010-3333-00XX");
    fren1.ShowMyFriendDetailInfo();
    fren2.ShowMyFriendDetailInfo();
    return 0;
}
