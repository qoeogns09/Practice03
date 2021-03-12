#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char a[20]="Daehun";
    char b[20];

    cout<<strlen(a)<<endl;
    strcat(a,"holy");
    cout<<a<<endl;
    strcpy(b, a);
    cout<<a<<" "<<b<<endl;
    cout<<strcmp(a,b)<<endl;
}