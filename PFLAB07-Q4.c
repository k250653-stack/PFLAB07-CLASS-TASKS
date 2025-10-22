#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", sentence);
    
    while (sentence[i] != '\0') {
        if (sentence[i] >= 65 && sentence[i] <= 90) {
            sentence[i] = sentence[i] + 32;
        }
        else if (sentence[i] >= 97 && sentence[i] <= 122) {
            sentence[i] = sentence[i] - 32;
        }
        i++;
    }
    
    printf("Converted string: %s\n", sentence);
    
    return 0;
}
