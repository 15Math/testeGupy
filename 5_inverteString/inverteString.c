#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    //100 é um valor arbitrariio para o máximo de caracteres da string. Porém essa alocação poderia ser feita dinâmicamente.
    char string[100]; 

    printf("Digite uma string: ");
    scanf("%s", string); 

    printf("String original: %s\n", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

}