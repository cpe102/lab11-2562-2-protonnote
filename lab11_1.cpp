#include <iostream>
using namespace std;

//Write prototype of function fibonacci() here
unsigned long long int fibonacci (int a);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	//Write definition of function fibonacci() here
	return 0;
}
unsigned long long int fibonacci(int a) {
		if (a == 0) return 0;
		else if (a == 1) return 1;
		if (a>1) return  fibonacci(a-1)+fibonacci(a-2);
}