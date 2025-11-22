// PotatoLang 1.0.4 File Parser Runner
// By aPpLegUo
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "main.h"
using namespace std;

int main() {
    printf("Potato Programming Language 1.0.4 File Parser Runner\nFile name(path): ");
    char filename[256];
    cin.getline(filename, 256);
    printf("Reading file: %s\n", filename);
    ifstream inFile;
    inFile.open(filename);
    // FILE INPUT VERSION!!!
    char code[32767];
    if(inFile.is_open()){
        inFile.getline(code, 32767, '\0');
        printf("code from file: %s\n", filename);
        for(int i = 0; i < strlen(code); i++) {
            printf("%c", code[i]);
        }
        printf("\n---End of code---\n");
        inFile.close();
    } else {
        cerr << "File not found or cannot be opened." << endl;
        return 1;
    }
    printf("---Executing code---\n");
    return parser(code);
}