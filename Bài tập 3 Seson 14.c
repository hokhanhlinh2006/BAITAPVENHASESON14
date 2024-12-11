#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);
    
    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
