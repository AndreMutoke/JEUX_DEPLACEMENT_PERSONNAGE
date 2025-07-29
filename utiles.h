#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


#include "deplacement.h"

#define TAILLEMOT 9

int afficherMenu()
{
    int startGame = -1;
    printf("++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+                  JEUX STAGE                  +\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Welcome to the game, select : \n1. To start the game\n0. To exit the game\n");
    scanf("%d", &startGame);
    while((startGame != 1) && (startGame != 0))
    {
        printf("La valeur de startGame est %d invalide\n", startGame);
        printf("Please select : \n1. To start the game\n0. To exit the game\n");
        scanf("%d", &startGame);

    }

    return startGame;
}
void afficheMot(char mot[])
{
    printf("\n|");
    for(int i=0; i<TAILLEMOT; ++i)
    {
        printf(" %c |", mot[i]);
    }
    printf("\n");

}

void initialiserMot(char mot[])
{
    for(int i=0; i<TAILLEMOT; ++i)
    {
        mot[i] = '\0';
    }
}
void remplirEspace(char mot[])
{
    for(int i=0; i<TAILLEMOT; ++i)
    {
        mot[i] = ' ';// Ou bien faire mot[i] = 32;
    }
}

void insererPersonnage(char mot[])
{
    mot[0] = '@';
}

int jouer(char mot[])
{
    if(mot[TAILLEMOT - 2] == '@')
    {
        printf("Fin du jeux !!!!!!\n");
        system("pause");
        return 1;
    }
    else
    {

            char choixUser;
            choixUser = getch();

            if(choixUser == 'u' || choixUser == 'U')
            {
                if(mot[0] != '@'){
                    allerAGauche(mot);
                }

            }
            if(choixUser == 'i' || choixUser == 'I')
            {
                allerADroite(mot);

            }
    }
    return 0;
}
void quitterJeux()
{
    printf("Merci d'avoir jouer !\n");
}



#endif // UTILES_H_INCLUDED
