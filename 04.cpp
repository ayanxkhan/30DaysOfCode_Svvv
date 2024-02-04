#include<iostream> 
using namespace std;

int factorial(int n) 
{ 
	return (n==1 || n==0) ? 1: n * factorial(n - 1); 
} 

int main() 
{ 
	int num;
    cout << "Enter any number:";
    cin >> num;

	cout << factorial(num);
	return 0; 
} 
