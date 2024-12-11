#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("hay nhap mot chuoi: ");
    scanf("%99[^\n]", str);

    printf("chuoi vua nhap la: %s\n", str);
    printf("do dai cua chuoi la: %lu\n", strlen(str));

    return 0;
}
