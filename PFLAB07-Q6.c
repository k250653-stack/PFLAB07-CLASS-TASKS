#include <stdio.h>

int main() {
    char word[100];
    int vowels = 0, consonants = 0;
    int i = 0;
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    while(word[i] != '\0') {
        char ch = word[i];
        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}
