#include<iostream>
#include<cstring>
using namespace std;

class Rectangle
{
    private:
        int length, width;
    public:
        Rectangle(int l, int w): length(l), width(w){}
        void ShowAreaInfo()
        {
            cout<<"¸éÀû: "<<length*width<<endl;
        }
};

class Square : public Rectangle
{
    public:
        Square(int side): Rectangle(side,side){}
};

int main(void)
{
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}