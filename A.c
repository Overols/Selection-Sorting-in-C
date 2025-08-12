#include <stdio.h>

int main(){
	int A;
	scanf("%d", &A);//read input number
	
	if (A % 2 == 0){
		printf("EVEN\n");//output "EVEN" if number is even
	} else{
		printf("ODD\n");//output "ODD" if the number is ODD
	}
	
	return 0;
}