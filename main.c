#include <stdio.h>
#include <stdlib.h>
struct Tache {
    char    titre[41];
    char    description[91];
    char    date[31];
    char    priorite[41];   
};

int nombre_taches = 0;
struct Tache taches[1000];
// Ajouter une tache
void  ajouter_tache()
{
    struct Tache tache;

    if (nombre_taches < 1000)
    {
        printf("Entrez le titre de la tache: ");
        scanf(" %[^\n]", tache.titre);
        printf("entrez la description de la tache: ");
        scanf(" %[^\n]",tache.description);
        printf("entrez la date de la tache: ");
        scanf(" %[^\n]",tache.date);
        printf("entrez la priorite de la tache: ");
        scanf(" %[^\n]",tache.priorite);
        taches[nombre_taches] = tache;
        nombre_taches++;
        printf("l'opération s'est terminée avec succés");
    }

}
// Afficher la liste des tàches
void afficher_tache()
{
    for(int i = 0; i < nombre_taches; i++)
    {
        printf("Tache: %d\n", i + 1);
        printf("   Titre:       %s\n", taches[i].titre);
        printf("   Description: %s\n", taches[i].description);
        printf("   Date:        %s\n", taches[i].date);
        printf("   Priorite:    %s\n", taches[i].priorite);
    }
}
// modifier une tâche
void modifier_tache() 
{
    int nombre_tache;
    struct Tache tache;

    printf("Entrez le nombre de la tache a modifier: ");
    scanf("%d", &nombre_tache);
    

    if (nombre_tache < nombre_taches)
    {
        printf("Entrez le titre de la tache: ");
        scanf(" %[^\n]", tache.titre);
        printf("entrez la description de la tache: ");
        scanf(" %[^\n]",tache.description);
        printf("entrez la date de la tache: ");
        scanf(" %[^\n]",tache.date);
        printf("entrez la priorite de la tache: ");
        scanf(" %[^\n]",tache.priorite);
        taches[nombre_tache - 1] = tache;
        printf("l'opération s'est terminée avec succés");
    }
    else
        printf("Nombre de tache incorrecte\n");
    
}
// Supprimer une tàche
void supprimer_tache() {

    int indice,i;
    printf("Enter indice qui veux supprimer :");
    scanf("%d",&indice);
    if(indice<0 || indice>nombre_taches){
            printf("indice invalide !\n");
            return ;
        }else{
    for(i=indice;i<nombre_taches;i--){
    taches[i]=taches[i+1];
}
    nombre_taches--;
}
    printf("suppresion avec succes !");

    }
adil — Today at 10:10
printf("Voici l'affichage des taches : \n");
     printf("---------------------\n");
     printf("---------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Tache %d:\n", i + 1);
        printf("Titre : %s\n", t[i].titre);
        printf("Description : %s\n", t[i].description);
        printf("Priorite : %s\n", t[i].priorite);
        printf("Date : %02d/%02d/%04d\n", t[i].date.jour, t[i].date.mois, t[i].date.annee);
        printf("---------------------\n");
    }

int main()
{nt choix;

    while (1)
    {
    
        printf("list des menu\n");
        printf("1.ajouter une tache\n");
        printf("2.afficher la liste des taches\n");
        printf("3.modifier une tache\n");
        printf("4.supprimer une tache\n");
        printf("5.filtrer les taches\n");
         

         printf("entrez votre choix: ");
         scanf("%d",&choix);

         switch (choix){

            case 1:
                ajouter_tache();
                break;
            case 2:
                afficher_tache();
                break;
            case 3:
                modifier_tache();
                break;
            case 4:
                supprimer_tache();
                break;
            case 5:
                filtrer_tache();
                break;
            case 6:
                exit(0);
                break;
            
            

            default:
                   printf("\ninvalide option\n\n"); 
                break;

         }
    }

}
