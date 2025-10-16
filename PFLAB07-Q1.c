#include<stdio.h>
int main(){
	int num[5];
	for(int i =0;i<5;i++){
		printf("Enter a number ");
		scanf("%d", &num[i]);
	}
	int temp = 0;
	for(int k = 4;k>=0;k--){
		if(k<4){
			printf("%d ", num[temp]);
			temp ++;
		}else{
			printf("%d ", num[k]);
		}
	}
	return 0;
}
