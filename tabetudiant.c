float void.calculerMoyenneClasse( Etudiant* etudiants, int taille); {
    float somme = 0.0;
    for (int i = 0; i < taille; i++) {
        somme += calculerMoyenne(etudiants[i]);
    }
    return somme / taille;
}
#include<stdio.h>
int i;
float somme;
int main(){
printf("entrer la moyenne des etudiants:");
scanf("%f",&i);
float moyenneGenerale = calculerMoyenneClasse(etudiants, taille);
printf("La moyenne generale de la classe est : %.2f\n", moyenneGenerale);
return 0;
}





