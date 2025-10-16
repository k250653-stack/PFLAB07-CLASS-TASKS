#include<stdio.h>
int main(){
	int num[10];
	int count=0, check;
	for(int i=0; i<10; i++){
		printf("Enter the value #%d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("Enter the number to check if it exists in the array: ");
	scanf("%d", &check);
	for(int j=0; j<10; j++){
		if(check == num[j]){
			count ++;
		}
	}
	if(count>0){
		printf("The number %d repeats %d times in the stored values\n", check,count);
	} else{
		printf("The number %d doesnot exist in the stored values", check);
	}
return 0;
}
