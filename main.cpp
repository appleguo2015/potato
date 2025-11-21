// PotatoLang 1.0.2 Parser
// By aPpLegUo
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    printf("Potato Programming Language 1.0.3 Parser\n");
    printf("Enter code (max 20 characters): ");
    // I THINK I MADE A COOL LANGUAGE LIKE A ESOLANG
    char code[32767];
    float answer = 1;
    bool isAnn = false;
    bool isStr = false;
    bool run = true;
    char input[32767] = "have not input";
    cin.getline(code, 32767);
    for(int i = 0; i < strlen(code); i++) {
        if(code[i] == 'p' && code[i + 1] == 'a' && code[i + 2] == 't' && code[i + 3] == 'o' && code[i + 4] == 't' && code[i + 5] == 'a') {
            // P A T O T A
            i += 5;
            printf("patota! (.' .)\n");
            //               ^^^^this is a potato
            // I REALLY EXPECT YOU TO SAY "PATOTA"
        }
        if(code[i] == 'P' && code[i + 1] == 'O' && code[i + 2] == 'T') {
            isAnn = true;
            i += 2; // BRO I REALLY FORGET THIS IN THE FIRST VERSION
        }
        if(code[i] == 'A' && code[i + 1] == 'T' && code[i + 2] == 'O') {
            isAnn = false;
            i += 2;
        }
        // POTATO IS MY FAVORITE!!!
        if(!isAnn && run) {
            if (code[i] == 'O' && code[i + 1] == 'U' && code[i + 2] == 'T' || code[i] == 'o' && code[i + 1] == 'u' && code[i + 2] == 't') {
                for (int j = i + 3; j < strlen(code); j++) {
                    // GET OUT!!!
                    if (code[j] == ';') break;
                    if (code[j] == 'a' && !isStr) printf("%f", answer);
                    if (code[j] == 'l' && code[j + 1] == 'o' && code[j + 2] == 'l') {
                        // LOL😂
                        printf("LOL");
                    }
                    if (code[j] == ' ') continue;
                    if (code[j] == '"') {
                        isStr = !isStr;
                    }
                    else if (code[j] == '`' && !isStr) {
                        for(int k = 0; k < strlen(input); k++){
                            printf("%c", input[k]);
                        }
                        // OUTPUT INPUT CONDITION
                    }
                    else if (isStr) printf("%c", code[j]);
                    else if (code[j] == 'n' && !isStr) printf("\n");
                }
            }
            else if (code[i] == 'i') {
                scanf("%32766s", input);
                // JUST 32766 CHARACTERS FOR INPUT
            }
            else if (code[i] == '?') {
                // IF IF IF IF IF IF
                for (int j = i + 1; j < strlen(code); j++) {
                    if(code[j] == '`') {
                        if (input[0] == code[j + 1]) {
                            // I THINK FIRST CHARACTER IS ENOUGH
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
                    else if (code[j] == '='){
                        // THANKS atoi
                        if (answer == atoi(&code[j + 1])) {
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
                    else {
                        cerr << "not found a available condition after '?'" << endl;
                        return 1;
                    }
                }
            }
            else if(code[i] == 'q') {
                // QUIT
                return 0;
            }
            else if(code[i] == '+') {
                int a, b;
                cin >> a >> b;
                answer = a + b;
            }
            else if(code[i] == '-') {
                int a, b;
                cin >> a >> b;
                answer = a - b;
            }
            else if(code[i] == '/') {
                float a, b;
                cin >> a >> b;
                answer = a / b;
            }
            else if(code[i] == '*') {
                int a, b;
                cin >> a >> b;
                answer = a * b;
            }
            else if(code[i] == '%') {
                int a, b;
                cin >> a >> b;
                answer = a % b;
            }
        }
    }
    return 1;
}