#include <stdio.h>
int checkNumber(int n1, int n2);
int multiply(int n1, int n2);
int n1,n2;
int main(){
	scanf("%d %d",&n1,&n2);
	checkNumber(n1,n2);
	
}

int checkNumber(int n1, int n2){
	if((n1 < 60&&n1 > 20)&&(n2 < 60&&n2 > 20)){
		printf("%d",multiply(n1,n2));
		return n1,n2;
	}
	else{
		printf("reject");
	}
}
int multiply(int n1, int n2){
	return n1 * n2;
	
}

