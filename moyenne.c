float calculerMoyenne(float note;) {
    int i;
    float note;
    float somme = 0.0;
    for ( i = 0; i < note; i++) {
        somme += note[i];
    }
    return somme / note;
}
#include<stdio.h>
int i;
float somme,note;
main(){
printf("entrer la somme des notes d'un etudiant :");
scanf("%d",&somme);
note=somme/=10;
printf("la moyenne est de:%d",note);
return 0;
}

