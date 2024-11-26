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
