#include <stdio.h>
#include <stdlib.h>

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
