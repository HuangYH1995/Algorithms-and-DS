#include <iostream>
using namespace std;

int fib(int);

int main(void){
	for(int i=0; i<10; i++){
		cout << i << "  " << fib(i) << endl;	
	}
	return 0;
}

int fib(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib(n-1)+fib(n-2);
}
