typedef struct Date{
    int jour;
    int mois;
    int annee;
} Date;

#include <stdio.h>
typedef struct Etudiant {
    char nom[30];
    char genre;
    Date dateNaissance;
    float notes[10];
} Etudiant;

int main() {
    int taille;
    int i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    Etudiant* etudiants = (Etudiant*) (taille * sizeof(Etudiant));
    if (etudiants == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        return 1;
    }
    for (i = 0; i < taille; i++) {
        printf("Entrez le nom de l'etudiant %d : ", i );
        scanf("%s", etudiants[i].nom);
        printf("Entrez le genre de l'etudiant %d : ", i );
        scanf(" %c", &etudiants[i].genre);}

    return 0;
                }
