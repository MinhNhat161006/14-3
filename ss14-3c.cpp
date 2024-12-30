#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld"; // Khai báo và gán giá trị cho chuỗi
    int length = strlen(str);  // Tính độ dài chuỗi

    printf("Chuỗi ban đầu: %s\n", str);
    printf("Chuỗi đảo ngược: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]); // In từng ký tự từ cuối về đầu
    }
    printf("\n");

    return 0;
}
