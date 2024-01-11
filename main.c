#include <iostream>

using namespace std;


swapThem(int *a,int *b){
    *a=*a+*b;
    *b=*b-*a;
    *a=*a-*b;

    cout<< "\nValues after swap: \na: "<<*a<< " \nb: "<<*b;
}
int main(){
    int a,b;

    a=3;
    b=4;

    cout<< "\nValues before swap: \na: "<<a<< " \nb: "<<b;
    swapThem(&a,&b);
}
