#include<stdio.h>
int main(){
	int marks[10];
	float fcount=0, pcount=0, sumf=0, sump=0, sum=0;
	for(int i=0; i<10; i++){
		printf("Enter Marks for the student #%d (Enter -1 to exit): ", i+1);
		scanf("%d", &marks[i]);
		if(marks[i] == -1){
			printf("Program Exited");
			return 0;
		}else if(marks[i] < 5){
			fcount ++;
			sumf += marks[i];
			} else if (marks[i] >= 5){
				pcount ++;
				sump += marks[i];
			}
		sum += marks[i];
	}
	printf("The amount of students that failed are %.0f\n", fcount);
	printf("The amount of students that passed are %.0f\n", pcount);
	printf("Average marks of the class is %.2f\n", sum/10);
	printf("Average marks of failed students is %.2f\n", sumf/fcount);
	printf("Average marks of passed students is %.2f\n", sump/pcount);
	return 0;
}
