#include <stdio.h>

int add(int a, int b){
	int c = a - b;
	return c;

}
int addd(int a, int b){
	int d = a * b;
	return d;

}
int ad(int a, int b){
	int f = a / b;
	return f;

}
int main(){
	int a = 10; 
	int b = 20;
	int c = add(a, b);
	int d = addd(a, b);
	int f = ad(a, b);
	printf("%d %d %d \n", c, d, f);
}