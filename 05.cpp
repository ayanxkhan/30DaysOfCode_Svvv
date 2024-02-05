#include<iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;

    cout << "Fibonacci series of first 10 elements:" << endl;
    cout << a << endl;
    cout << b << endl;

    int fib=0;

    for(int i=1;i<11;i++){
        fib=a+b;
        cout << fib << endl;
        a=b;
        b=fib;
    }
}