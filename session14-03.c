#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int choice;

    printf("Chuong trinh xu ly chuoi\n");
    printf("1. Nhap chuoi\n");
    printf("2. In tung ky tu trong chuoi\n");
    printf("3. In chuoi dao nguoc\n");
    printf("4. Thoat\n");
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
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t length = strlen(input);
            if (input[length - 1] == '\n') {
                input[length - 1] = '\0';
            }

            printf("Cac ky tu trong chuoi la: ");
            int i;
            for (i = 0; i < strlen(input); i++) {
                printf("%c ", input[i]);
            }
            printf("\n");
            break;

        case 3:
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t rev_len = strlen(input);
            if (input[rev_len - 1] == '\n') {
                input[rev_len - 1] = '\0';
            }

            printf("Chuoi dao nguoc la: ");
            for (i = strlen(input) - 1; i >= 0; i--) {
                printf("%c", input[i]);
            }
            printf("\n");
            break;

        case 4:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}
