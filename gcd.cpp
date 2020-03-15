// Greatest common divisor
#include <iostream>
using namespace std;

int gcd(int, int);

int main(void){
	cout << gcd(72,136);

}

int gcd(int a, int b){
	if(a % b == 0) return b;
	else return gcd(b, a%b);
}
