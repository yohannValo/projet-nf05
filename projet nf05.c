#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int consulter_Agenda()
{
    return 0 ;
}

void viderbuffer()
{
    int c = 0 ;
    while (c != '\n' && c != EOF) {
            c = getchar() ; }
}

void entrer_motif()
{
    FILE* fichier = NULL ;
    char motif[50] ;
    char *positionEntree = NULL ;
    fichier = fopen("creer_rdv.txt", "a+");

    if (fichier != NULL) {
    printf("Entrer le motif : ") ;

    if (fgets(motif, 50, stdin) != NULL)
    {
        positionEntree = strchr(motif, '\n') ;

        if (positionEntree != NULL)
        {
            *positionEntree = '\0' ;
        }
        else {
            viderbuffer() ;
        }
    }
    else
    {
        viderbuffer() ;
    }
    fprintf(fichier, "\t\tNouveau RDV\n\nMotif : %s\n", motif) ;
    fclose(fichier);
    }
}

void entrer_date()
{
    FILE* fichier = NULL ;
    char date[50] ;
    char *positionEntree = NULL ;
    fichier = fopen("creer_rdv.txt", "a+");

    if (fichier != NULL) {

    printf("\nEntrer la date : ") ;

    if (fgets(date, 50, stdin) != NULL)
    {
        positionEntree = strchr(date, '\n') ;

        if (positionEntree != NULL)
        {
            *positionEntree = '\0' ;
        }
        else {
            viderbuffer() ;
        }
    }
    else
    {
        viderbuffer() ;
    }
    fprintf(fichier, "Date : %s\n", date) ;
    fclose(fichier);
    }
}


void entrer_lieu()
{
    FILE* fichier = NULL ;
    char lieu[50] ;
    char *positionEntree = NULL ;
    fichier = fopen("creer_rdv.txt", "a+");

    if (fichier != NULL) {
    printf("\nEntrer le lieu : ") ;

    if (fgets(lieu, 50, stdin) != NULL)
    {
        positionEntree = strchr(lieu, '\n') ;

        if (positionEntree != NULL)
        {
            *positionEntree = '\0' ;
        }
        else {
            viderbuffer() ;
        }
    }
    else
    {
        viderbuffer() ;
    }
    fprintf(fichier, "Lieu : %s\n", lieu) ;
    fclose(fichier);
    }
}


void entrer_heure()
{
    FILE* fichier = NULL ;
    char heure[50] ;
    char *positionEntree = NULL ;
    fichier = fopen("creer_rdv.txt", "a+");

    if (fichier != NULL) {

    printf("\nEntrer l'heure : ") ;

    if (fgets(heure, 50, stdin) != NULL)
    {
        positionEntree = strchr(heure, '\n') ;

        if (positionEntree != NULL)
        {
            *positionEntree = '\0' ;
        }
        else {
            viderbuffer() ;
        }
    }
    else
    {
       viderbuffer() ;
    }
    fprintf(fichier, "Heure : %s\n", heure) ;
    fclose(fichier) ;
    }
}


int creer_RDV()
{
    entrer_motif() ;
    entrer_date() ;
    entrer_lieu() ;
    entrer_heure() ;
    return 0 ;
}

int modif_RDV()
{
    return 0 ;
}

int save_File()
{

    return 0 ;
}

int ajout_Util()
{
    FILE *fichier = NULL ;
    char utilisateur[50] ;
    char *positionEntree = NULL ;
    fichier = fopen("ajout_util.txt", "w") ;

    if (fichier != NULL) {

        printf("\nEntrer le nom de l'utilisateur: ") ;

        if (fgets(utilisateur, 50, stdin) != NULL)
        {
            positionEntree = strchr(utilisateur, '\n') ;

            if (positionEntree != NULL)
            {
                *positionEntree = '\0' ;
            }
            else {
                viderbuffer() ;
            }
        }
    else
    {
        viderbuffer() ;
    }
    fprintf(fichier, "Nouvel utilisateur : %s\n", utilisateur) ;
    fclose(fichier);
    }

    return 0 ;
}

int modif_Util()
{
    return 0 ;
}

int suppr_Util()
{
    return 0 ;
}

int ajout_JourSpe()
{
    return 0 ;
}

int modif_JourSpe()
{
    return 0 ;
}

int suppr_JourSpe()
{
    return 0 ;
}

int affichage_Jour()
{
    return 0 ;
}

int affichage_Semaine()
{
    return 0 ;
}

int affichage_Mois()
{
    return 0 ;
}

int utilisateur()
{
    int choix ;

    printf("\nConsulter l'agenda = 1 ** Creer un RDV = 2 ** Modifier un RDV = 3 ** Sauvegarder dans un fichier = 4 \n") ;
    scanf("%d", &choix) ;
    viderbuffer() ;
    switch(choix)
    {case 1 : consulter_Agenda() ; break ;
     case 2 : creer_RDV() ; break ;
     case 3 : modif_RDV() ; break ;
     case 4 : save_File() ; break ;
     default : while (choix != 1 && choix != 2 && choix != 3 && choix != 4) {
        printf("Veuillez saisir 1, 2, 3 ou 4 :") ;
        scanf("%d", &choix) ; } }

 return 0 ;
}

int administrateur()
{
int choix ;

    printf("\nAjouter un utilisateur =..........1\nModifier un utilisateur =.........2\nSupprimer un utilisateur =........3\n") ;
    printf("Ajouter une journee speciale =....4\nModifier une journee speciale =...5\nSupprimer une journee speciale =..6\n") ;
    printf("Affichage par jour =..............7\nAffichage par semaine =...........8\nAffichage par mois =..............9\n") ;
    scanf("%d", &choix) ;
    viderbuffer() ;
    switch(choix)
    {case 1 : ajout_Util() ; break ;
     case 2 : modif_Util() ; break ;
     case 3 : suppr_Util() ; break ;
     case 4 : ajout_JourSpe() ; break ;
     case 5 : modif_JourSpe() ; break ;
     case 6 : suppr_JourSpe() ; break ;
     case 7 : affichage_Jour() ; break ;
     case 8 : affichage_Semaine() ; break ;
     case 9 : affichage_Mois() ; break ;
     default : while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5 && choix != 6 && choix != 7 && choix != 8 && choix != 9) {
        printf("Veuillez saisir 1, 2, 3, 4, 5, 6, 7, 8 ou 9 :") ;
        scanf("%d", &choix) ; } }

  return 0 ;
}



int main()
{
    int choix ;

    printf("\t\t\t\t\tBienvenue dans votre agenda virtuel !\n\nChoisissez le mode : Utilisateur = 1 ****** Administrateur = 2\n") ;
    scanf("%d", &choix) ;
    viderbuffer() ;
    while (choix != 1 && choix != 2) {
        printf("Veuillez saisir 1 ou 2 :") ;
        scanf("%d", &choix) ;
    }
    if (choix == 1) utilisateur() ;
    else administrateur() ;

    return 0;
}
