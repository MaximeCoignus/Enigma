#include <stdio.h>
#include <stdlib.h>

int i = 0;
int j = 0;
int k = 0;

int main()
{
        for(i = 0 ; i < 10 ; i++){
            for (j = 0; j < 10 ; j++){
                for (k = 0; k < 10; k++) {
                    printf("Valeur du compteur : %d%d%d\n",i,j,k);
                }
            }
        }

return 0;
}
