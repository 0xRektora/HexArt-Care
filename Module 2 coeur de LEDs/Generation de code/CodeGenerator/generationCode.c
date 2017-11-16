#include "generationCode.h"

//Fonction qui g�n�re le fichier param.h
void draw(int *choix)
{
    //Ouverture des fichier
    FILE *in = fopen("param.txt", "r");
    FILE *out = fopen("main.c\\param.h", "w");
    char mystr[50];
    //Valeur qu'on doit chercher afin d'ajouter le choix d'utilisateur du mode d'affichage
    char cmp[] = "#define FUNCTION\n";
    while(fgets(mystr, 50, in) != NULL )
    {
        //Si la valeur est trouv� on ajoute le choix de l'utilisateur
        if(strcmp(mystr, cmp) == 0)
        {

            mystr[strlen(mystr)-1] = ' ';
            char choice[12];
            sprintf(choice, "%d", *choix);
            strcat(mystr, choice);
            strcat(mystr, "\n");
            fputs(mystr, out);
        }
        //Sinon on �crit sur notre fichier
        else
        {
            fputs(mystr, out);
        }

    }
    fclose(in);
    fclose(out);
}
