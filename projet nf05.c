#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int consulterAgenda()
{
    return 0 ;
}

int creerRDV()
{

    return 0 ;
}

int modifRDV()
{
    return 0 ;
}

int saveFile()
{

    return 0 ;
}


int ajoutUtil()
{
    FILE* fichier = NULL;
   char nom [10];


    fichier = fopen("ajout_util.txt", "w");

    if (fichier != NULL)
    {

        printf("nom du nouvel utilisateur ? ");
        scanf("%s",&nom);
        fprintf(fichier, "nouvel utilisateur %s",nom);
        fclose(fichier);
    }

    return 0;
}






int modifUtil()
{
    return 0 ;
}

int supprUtil()
{
    return 0 ;
}

int ajoutJourSpe()
{
    return 0 ;
}

int modifJourSpe()
{
    return 0 ;
}

int supprJourSpe()
{
    return 0 ;
}

int affichageJour()
{
    return 0 ;
}

int affichageSemaine()
{
    return 0 ;
}

int affichageMois()
{
    return 0 ;
}

int utilisateur()
{
    int choix ;

    printf("\nConsulter l'agenda = 1 ** Creer un RDV = 2 ** Modifier un RDV = 3 ** Sauvegarder dans un fichier = 4 \n") ;
    scanf("%d", &choix) ;
    switch(choix)
    {
    case 1 :
        consulterAgenda() ;
        break ;
    case 2 :
        creerRDV() ;
        break ;
    case 3 :
        modifRDV() ;
        break ;
    case 4 :
        saveFile() ;
        break ;
    default :
        while (choix != 1 && choix != 2 && choix != 3 && choix != 4)
        {
            printf("Veuillez saisir 1, 2, 3 ou 4 :") ;
            scanf("%d", &choix) ;
        }
    }

    return 0 ;
}

int administrateur()
{
    int choix ;

    printf("\nAjouter un utilisateur = 1 ** Modifier un utilisateur = 2 ** Supprimer un utilisateur = 3\n") ;
    printf("Ajouter une journee speciale = 4 ** Modifier une journee speciale = 5 ** Supprimer une journee speciale = 6\n") ;
    printf("Affichage par jour = 7 ** Affichage par semaine = 8 ** Affichage par mois = 9\n") ;
    scanf("%d", &choix) ;
    switch(choix)
    {
    case 1 :
        ajoutUtil() ;
        break ;
    case 2 :
        modifUtil() ;
        break ;
    case 3 :
        supprUtil() ;
        break ;
    case 4 :
        ajoutJourSpe() ;
        break ;
    case 5 :
        modifJourSpe() ;
        break ;
    case 6 :
        supprJourSpe() ;
        break ;
    case 7 :
        affichageJour() ;
        break ;
    case 8 :
        affichageSemaine() ;
        break ;
    case 9 :
        affichageMois() ;
        break ;
    default :
        while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5 && choix != 6 && choix != 7 && choix != 8 && choix != 9)
        {
            printf("Veuillez saisir 1, 2, 3, 4, 5, 6, 7, 8 ou 9 :") ;
            scanf("%d", &choix) ;
        }
    }
    return 0 ;
}




int main()
{
    int choix ;

    printf("\t\t\t\t\tBienvenue dans votre agenda virtuel !\n\nChoisissez le mode : Utilisateur = 1 ****** Administrateur = 2\n") ;
    scanf("%d", &choix) ;
    while (choix != 1 && choix != 2)
    {
        printf("Veuillez saisir 1 ou 2 :") ;
        scanf("%d", &choix) ;
    }
    if (choix == 1) utilisateur() ;
    else administrateur() ;

    return 0;
}
