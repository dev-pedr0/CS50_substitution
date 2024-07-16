#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include<math.h>

int main(int argc, string argv[]){

    int count = 0;
    int p = 0;
    string text;
    int lenght = strlen(argv[1]);
    bool check = true;


    for (int i = 0; i < lenght; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            check = false;
            printf("Use apenas letras do alfabeto\n");
            return 1;
        }
    }

   if (argv[2] != 0)
   {
        printf("Uso: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("A chave deve conter 26 caracteres\n");
        return 1;
    }

    //printf("Correto\n");
    text = get_string("Plaintext: ");
    //printf("O texto é: %s\n", text);
    for (int j = 0; j < strlen(text); j++)
    {
        if (isalpha(text[j]) != 0)
        {
            text[j] = text[j];
        }
        if (isupper(text[j]) != 0)
        {
            p = text[j] - 65;
            text[j] = toupper(argv[1][p]);
        }
        if (islower(text[j]) != 0)
        {
            p = text[j] - 97;
            text[j] = text[j] = tolower(argv[1][p]);
        }
    }
    printf("Ciphertext: %s\n", text);
    return 0;
}
