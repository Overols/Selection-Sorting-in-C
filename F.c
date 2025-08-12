#include <stdio.h>

void printOrder(int d, int s, int t){
	if (d > s && d > t){
		printf("Daging\n");
		if (s > t){
			printf("Sayur\n");
			printf("Telur\n");
		} else{
			printf("Telur\n");
			printf("Sayur\n");
		}
	} else if (s > d && s > t){
		printf("Sayur\n");
		if (d > t){
			printf("Daging\n");
			printf("Telur\n");
		} else{
			printf("Telur\n");
			printf("Daging\n");
		}
	} else{
		printf("Telur\n");
		if (d > s){
			printf("Daging\n");
			printf("Sayur\n");
		} else{
			printf("Sayur\n");
			printf("Daging\n");
		}
	}
}

int main(){
	int d, s, t;
	scanf("%d %d %d", &d, &s, &t);
	
	printOrder(d, s, t);//determine and print order
	
	return 0;
}