#include <stdio.h>

int main() {
    int numbers[10];
    
    printf("Enter 10 integers: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int max = numbers[0];
    int min = numbers[0];
    
    for(int i = 1; i < 10; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }
    
    int difference = max - min;
    printf("Difference (max - min): %d\n", difference);
    
    return 0;
}
