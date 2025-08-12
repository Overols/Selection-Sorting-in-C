#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//calculate left-hand side (LHS) and right-hand side (RHS)
	long long LHS = (long long)a * b;
	long long RHS = (long long)c - d;
	
	//compare LHS and RHS and print results
	if (LHS == RHS){
		printf("True\n");
	} else{
		printf("False\n");
	}
	
	return 0;
}