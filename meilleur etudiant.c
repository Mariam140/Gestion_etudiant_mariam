#include <stdio.h>
int main() {
        float taille;
        float meilleureMoyenne,moyenne;
         float calculerMoyenne;
         int i;
    for ( i = 1; i < taille; i++) {
        float moyenne = calculerMoyenne(etudiants[i]);
        if (moyenne > meilleureMoyenne) {
            meilleurEtudiant = i;
            meilleureMoyenne = moyenne;
        }
    }
printf("Le meilleur etudiant est %s avec une moyenne de %.2f\n", etudiants[meilleurEtudiant].nom, meilleureMoyenne);
    return 0;
}

