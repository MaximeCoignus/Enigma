#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    // Lecture du texte saisie au clavier
    if (fgets(chaine, longueur, stdin) != NULL) // Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); // Recherche de l'entr�e
        if (positionEntree != NULL) // Si retour � la ligne il y a
        {
            *positionEntree = '\0'; // On remplace par une chaine de caractere vide
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
