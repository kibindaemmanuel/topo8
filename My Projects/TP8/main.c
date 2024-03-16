#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vie = 100;
    int agilite = 10;
    int force = 15;
    char choix;

    printf("Le chasseur de sangoma se lance dans une quete pour annexer un nouveau territoire!:\n");
    printf("Le chasseur de sangoma entre en conflit avec les guerriers des hauts plateaux montagnes.\n");
    printf("Les guerriers des hauts plateaux lui infligent deja 3 impacts de degat.\n");
    // Boucle pour gerer le scenario

    while (1){
        printf("Appuyer sur 'F' pour fuir ou 'Q' pour faire appel a la pretresse errante : ");
        scanf("%c", &choix);
    if(choix == 'F'){
       vie -= 3;
    agilite -= 2;
    force -= 2;

     printf("Le chasseur subit les degats...Vie : %d, Agilite : %d, Force : %d\n", vie, agilite, force);


} else if (choix == 'Q'){
    vie += 37;
    printf("La pretresse errante soigne le chasseur ... Vie : %d\n", vie);
    break;

     } else {

printf("Choix invalide.Veuillez appuyer sur 'F' ou 'Q'.\n");

  }
}
printf("Le chasseur est maintenant en conflit  avec les envahisseurs...\n");
vie -= 2;

printf("Les envahisseurs lui infligent 2 coups de degat... Vie : %d\n", vie);

printf("La pretresse WATA protege le chasseur et riposte ...\n");

vie -= 3;
force -= 1;


printf("La pretresse WATA subit les degats mais conduit les envahisseurs a la mort... Vie : %d, Force : %d\n", vie, force);
 vie += 25;
printf("La pretresse errante recharge l energie vitale du chasseur... Vie : %d\n", vie);

printf("Fin du scenario.\n");

    return 0;
}
