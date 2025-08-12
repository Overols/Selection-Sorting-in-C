#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//calculate LHS and RHS
	long long LHS = (long long)a * b;
	long long RHS = (long long)c + d;
	
	//compare LHS and RHS and print the result
	if (LHS > RHS){
		printf("True\n");
	} else{
		printf("False\n");
	}
	
	return 0;
}