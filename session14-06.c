#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    int choice;

    printf("Chuong trinh xu ly chuoi\n");
    printf("1. Nhap chuoi\n");
    printf("2. In tung ky tu trong chuoi\n");
    printf("3. In chuoi dao nguoc\n");
    printf("4. Dem so lan xuat hien cua ky tu\n");
    printf("5. Dem so tu trong chuoi\n");
    printf("6. Dem so ky tu la chu cai trong chuoi\n");
    printf("7. Thoat\n");
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

        case 4: {
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t count_len = strlen(input);
            if (input[count_len - 1] == '\n') {
                input[count_len - 1] = '\0';
            }

            char character;
            printf("Nhap vao mot ky tu: ");
            scanf("%c", &character);

            int count = 0;
            for (i = 0; i < strlen(input); i++) {
                if (input[i] == character) {
                    count++;
                }
            }

            printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", character, count);
            break;
        }

        case 5: {
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t word_len = strlen(input);
            if (input[word_len - 1] == '\n') {
                input[word_len - 1] = '\0';
            }

            int word_count = 0;
            int in_word = 0;
            for (i = 0; i < strlen(input); i++) {
                if (!isspace(input[i])) {
                    if (!in_word) {
                        in_word = 1;
                        word_count++;
                    }
                } else {
                    in_word = 0;
                }
            }

            printf("So tu trong chuoi la: %d\n", word_count);
            break;
        }

        case 6: {
            printf("Nhap vao mot chuoi: ");
            fgets(input, sizeof(input), stdin);
            size_t alpha_len = strlen(input);
            if (input[alpha_len - 1] == '\n') {
                input[alpha_len - 1] = '\0';
            }

            int alpha_count = 0;
            for (i = 0; i < strlen(input); i++) {
                if (isalpha(input[i])) {
                    alpha_count++;
                }
            }

            printf("So ky tu la chu cai trong chuoi la: %d\n", alpha_count);
            break;
        }

        case 7:
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}

