#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpret(char* code) {
    char* line;
    char* token;
    int memory = 26;
    char inp[100] = "";

    line = strtok(code, "\n");
    while (line != NULL) {
        token = strtok(line, "");
        while (*token != '\0') {
            if (*token == '*')
                memory += 5;
            else if (*token == '+')
                memory += 1;
            else if (*token == '-')
                memory -= 1;
            else if (*token == '!')
                memory -= 5;
            else if (*token == '&') {
                switch (memory) {
                    case 26: printf("a"); break;
                    case 25: printf("b"); break;
                    case 24: printf("c"); break;
                    case 23: printf("d"); break;
                    case 22: printf("e"); break;
                    case 21: printf("f"); break;
                    case 20: printf("g"); break;
                    case 19: printf("h"); break;
                    case 18: printf("i"); break;
                    case 17: printf("j"); break;
                    case 16: printf("k"); break;
                    case 15: printf("l"); break;
                    case 14: printf("m"); break;
                    case 13: printf("n"); break;
                    case 12: printf("o"); break;
                    case 11: printf("p"); break;
                    case 10: printf("q"); break;
                    case 9: printf("r"); break;
                    case 8: printf("s"); break;
                    case 7: printf("t"); break;
                    case 6: printf("u"); break;
                    case 5: printf("v"); break;
                    case 4: printf("w"); break;
                    case 3: printf("x"); break;
                    case 2: printf("y"); break;
                    case 1: printf("z"); break;
                    case 27: printf(" "); break;
                    case 28: printf("\n"); break;
                    case 29: printf("!"); break;
                    case 30: printf("?"); break;
                    case 31: printf(","); break;
                    case 32: printf("."); break;
                    case 33: printf("+"); break;
                    case 34: printf("-"); break;
                    case 35: printf("*"); break;
                    case 36: printf("&"); break;
                    case 37: printf("{"); break;
                    case 38: printf("}"); break;
                    case 39: printf("\%"); break;
                    case 40: printf("["); break;
                    case 41: printf("]"); break;
                    case 42: printf("="); break;
                    case 43: printf(";"); break;
                    case 44: printf(":"); break;
                    case 45: printf("#"); break;
                    case 46: printf("$"); break;
                    case 47: printf("\""); break;
                    case 48: printf("'"); break;
                    case 49: printf("~"); break;
                    case 50: printf("0"); break;
                    case 51: printf("1"); break;
                    case 52: printf("2"); break;
                    case 53: printf("3"); break;
                    case 54: printf("4"); break;
                    case 55: printf("5"); break;
                    case 56: printf("6"); break;
                    case 57: printf("7"); break;
                    case 58: printf("8"); break;
                    case 59: printf("9"); break;
                    case 60: printf(">"); break;
                    case 61: printf("<"); break;
                    case 62: printf("("); break;
                    case 63: printf(")"); break;
                    case 64: printf("^"); break;
                }
            } else if (*token == '%') {
                printf("%d", memory);
            } else if (*token == '@') {
                scanf("%s", inp);
            } else if (*token == '.') {
                printf("%s", inp);
            }
            token++;
        }
        line = strtok(NULL, "\n");
    }
}

int main(int argc, char* argv[]) {
    char version[] = "1.1";
    if (argc == 1) {
        printf("memprint version: %s\n", version);
        printf("Usage: %s <file>\n", argv[0]);
    } else {
        if (strstr(argv[1], ".mempr") != NULL) {
            FILE* file = fopen(argv[1], "r");
            if (file != NULL) {
                fseek(file, 0, SEEK_END);
                long size = ftell(file);
                fseek(file, 0, SEEK_SET);
                char* buffer = (char*)malloc(size + 1);
                if (buffer != NULL) {
                    fread(buffer, 1, size, file);
                    buffer[size] = '\0';
                    interpret(buffer);
                    free(buffer);
                }
                fclose(file);
            }
        } else {
            printf("Use .mempr file extension\n");
        }
    }
    return 0;
}
