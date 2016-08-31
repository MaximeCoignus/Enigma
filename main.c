#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
        char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
        char saisie = 'a';
        int i,j,k,l;

        for(j = 0; j < 26; j++)
        {
            i = alphabet[j];
            for(k = 0; k < 26; k++)
            {
                printf("Veuillez saisir une lettre : \n");
                scanf("%s", &saisie);
                l = alphabet[k];
                if (saisie != '\n')
                {
                    printf("%c%c\n", i,l);
                }

                /*else
                {
                    printf("Veuillez saisir une lettre entre A et Z majuscule\n");
                    printf("saisie = %c\n", saisie);
                    break;
                }*/
            }
        }
return 0;
}
