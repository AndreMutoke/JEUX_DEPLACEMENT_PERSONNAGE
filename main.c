#include <stdio.h>
#include <stdlib.h>

#include "utiles.h"
#include "deplacement.h"

int main()
{
    int startGame = -1;
    int finJeux = 0; // Donc le jeux n'est pas arrivé à la fin
    char mot[TAILLEMOT];

    startGame = afficherMenu();
    initialiserMot(mot);
    remplirEspace(mot);
    insererPersonnage(mot);

    system("cls");
    afficheMot(mot);

    if(startGame == 1)
    {
        finJeux = jouer(mot);

        while(finJeux == 0)
        {
            afficheMot(mot);
            finJeux = jouer(mot);
            system("cls");


        }
    }
    else
    {
        quitterJeux();
    }

    return 0;
}
