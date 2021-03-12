#ifndef __Cal_H__
#define __Cal_H__

class Calculator
{
    private:
        int cnt_add , cnt_div, cnt_min, cnt_tim;
    public:
        void Init();
        float Add(float a, float b);
        float Div(float a, float b);
        float Min(float a, float b);
        float Tim(float a, float b);
        void ShowOpCount();
};

#endif