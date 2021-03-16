#include<iostream>

using namespace std;

class Car{
    private:
        int gasolineGauge;
    public:
        Car(int gas): gasolineGauge(gas) {
            cout<<"Car can use gas"<<endl;
        }
        int GetGasGauge()
        {
            return gasolineGauge;
        }
};

class HybridCar : public Car
{
    private:
        int electricGauge;
    public:
        HybridCar(int gas, int electric): Car(gas), electricGauge(electric){
            cout<<"Car can use electric"<<endl;
        }
        int GetElecGauge()
        {
            return electricGauge;
        }
};

class HybridWaterCar : public HybridCar
{
    private:
        int waterGauge;
    public:
        HybridWaterCar(int gas, int electric, int water): HybridCar(gas, electric), waterGauge(water){
            cout<<"Car can use water"<<endl;
        }
        void ShowCurrentGauge()
        {
            cout<<"ÀÜ¿© °¡¼Ö¸°: "<<GetGasGauge()<<endl;
            cout<<"ÀÜ¿© Àü±â·®: "<<GetElecGauge()<<endl;
            cout<<"ÀÜ¿© ¿öÅÍ·®: "<<waterGauge<<endl;
        }
};

int main()
{
    Car c(1);
    HybridCar hc(2,3);
    HybridWaterCar hw(3,4,5);


    hw.ShowCurrentGauge();
}