#include <iostream>
using namespace std;

int fib_recursive(int);
int fib_iterative(int);

int main(void){

	for(int i=0; i<10; i++){
		cout << i << "  " << fib_recursive(i) << "  " << fib_iterative(i) << endl;	
	}
	return 0;
}

int fib_recursive(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib_recursive(n-1)+fib_recursive(n-2);
}

int fib_iterative(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else{
		int a=0, b=1, c=0;
		for(int i=2; i<=n; i++){
			c = a+b;
			a = b;
			b = c;
		}
		return c;
	}
}
