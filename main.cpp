// PotatoLang 1.0.0 Parser
// By aPpLegUo
#include <iostream>
#include <string>
using namespace std;

int main() {
    printf("Potato Programming Language Parser\n");
    printf("Enter code (max 20 characters): ");

    char code[32767];
    bool isAnn = false;
    bool isStr = false;
    bool run = true;
    char input[32767] = "have not input";
    cin.getline(code, 32767);
    for(int i = 0; i < strlen(code); i++) {
        if(code[i] == 'P' && code[i + 1] == 'O' && code[i + 2] == 'T') isAnn = true;
        if(code[i] == 'A' && code[i + 1] == 'T' && code[i + 2] == 'O') isAnn = false;
        if(!isAnn && run) {
            if (code[i] == 'O' && code[i + 1] == 'U' && code[i + 2] == 'T' || code[i] == 'o' && code[i + 1] == 'u' && code[i + 2] == 't') {
                for (int j = i + 3; j < strlen(code); j++) {
                    if (code[j] == ';') break;
                    if (code[j] == '"') {
                        isStr = !isStr;
                    }
                    else if (code[j] == '`') {
                        for(int k = 0; k < strlen(input); k++){
                            printf("%c", input[k]);
                        }
                    }
                    else if (isStr) printf("%c", code[j]);
                    else if (code[j] == 'n') printf("\n");
                }
            }
            else if (code[i] == 'i') {
                scanf("%32766s", input);
            }
            else if (code[i] == '?') {
                for (int j = i + 1; j < strlen(code); j++) {
                    if (input[0] == code[j + 1]) {
                        run = true;
                        break;
                    }
                    else {
                        while (code[i] != ';') {
                            run = false, i++;
                        }
                        run = true;
                        break;
                    }
                }
            }
        }
    }

    printf("\nParsing completed.\n");
    return 0;
}