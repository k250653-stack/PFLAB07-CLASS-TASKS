//Sorry I was unable to overcome this problem without the use of nested loops
#include <stdio.h>

#define SIZE 10
#define MAX_RANGE 1000  
int main() {
    int arr[SIZE];
    int seen[MAX_RANGE] = {0};  
    printf("Enter 10 integers: ");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < SIZE; i++) {
        int current = arr[i];
        
        
        if(seen[current] == 1) {
            arr[i] = -1;  
        } else {
            seen[current] = 1;  
        }
    }
    
    printf("Updated array: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
