#ifndef DEPLACEMENT_H_INCLUDED
#define DEPLACEMENT_H_INCLUDED
#define TAILLEMOT 9

void allerAGauche(char mot[])
{

        // On part à gauche
        // On trouve d'abord la position de @
        int pos = 0;
        for(int i=0; i< TAILLEMOT; ++i)
        {
            if(mot[i] == '@')
            {
                pos = i;
            }
        }
        mot[pos] = ' ';
        mot[pos - 1] = '@';

}
void allerADroite(char mot[])
{
        // On part à gauche
        // On trouve d'abord la position de @
        int pos = 0;
        for(int i=0; i< TAILLEMOT; ++i)
        {
            if(mot[i] == '@')
            {
                pos = i;
            }
        }
        mot[pos] = ' ';
        mot[pos + 1] = '@';
}


#endif // DEPLACEMENT_H_INCLUDED
