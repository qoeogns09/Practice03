#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    for(int i=0; i<5; i++)
        cout<<"Random number "<<i<<": "<<rand()%100<<endl;
    return 0;

}