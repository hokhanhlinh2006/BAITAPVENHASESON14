#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World! 123";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
      
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    printf("Số lượng ký tự là chữ cái trong chuỗi là: %d\n", count);

    return 0;
}
