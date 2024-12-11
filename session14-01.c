#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int choice;

    printf("Chuong trinh xu ly chuoi\n");
    printf("1. Nhap chuoi\n");
    printf("2. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
    getchar(); 

    switch (choice) {
        case 1:
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t len = strlen(input);
            if (input[len - 1] == '\n') {
                input[len - 1] = '\0';
            }

            printf("Chuoi ban vua nhap: %s\n", input);
            printf("Do dai cua chuoi: %zu\n", strlen(input));
            break;

        case 2:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}
