#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wformat-insufficient-args"
#pragma clang diagnostic pop

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned char chiffre = 3; // 255
unsigned int grosChiffre = 23984; // 65 535
unsigned long tresGrosChiffre = 1939872; // 4 294 967 295

//

char chiffreNeg = -3; // 127
int grosChiffreNeg = -23323; // 323 767
long tresGrodChiffreNeg = -4434343; // 2 147 483 647

float decimalNeg = 2.2; // 1 x 1037
double devimalDoubleNeg = 2.2; // 1 x 1037

const int CONSTANTE = 5;
int function(int shiffr){

    shiffr = shiffr + 1;
    // Afficher un message

    // printf = afficher un message
    // scanf = lire un message, demande une saisie à un utilisateur

    printf("Ceci est un integar negatif: %d !", chiffreNeg);
    printf("Ceci est un integar positif: %u !", chiffre);
    printf("Ceci est un long integar: %ld !", tresGrodChiffreNeg);
    printf("Ceci est un float: %f !", decimalNeg);
    printf("Je peux aussi, %d en afficher plusieurs : %f !", chiffreNeg, decimalNeg);

    return shiffr;
}


int getScore(){
    int score = 0;
    printf("Quel score avez-vous ?");

    scanf("Votre score est pour l'instant : %d", &score); // & est une référence à score que l'on passe dans la fonction.
    printf("Ah, vous avez donc %d points ! \n\n, score");
    return score;
}


int increment(int base){

    // l'incrémentation
    base ++;
    // décrémentation
    base --;

    int nombre = 2;

    nombre += 4; // nombre = 6
    nombre -= 3; // nombre = 3
    nombre *= 5; // nombre = 15
    nombre /= 3; // nombre = 5
    nombre %= 3; // nombre = 2 (modulo va récupérer le reste)
    return base;
}

int arythmetique (){
    /*
    Avec la library <math.h>
     */
    int tst = 2;
    double absolue = abs(tst);

    double arrondDessus = ceil(tst);

    double arrondDessous = floor(tst);

    double puissance = pow(tst, 4);

    double carree = sqrt(puissance);

    double sinus = sin(tst);
    double cosinus = cos(tst);
    double tangente = tan(tst);


    double asinus = asin(tst);
    double acosinus = acos(tst);
    double atangente = atan(tst);

    double exponentelle = exp(tst);

    double ln = log(tst);

    double ln10 = log10(tst);

}


// Pointeurs
int maVariable = 10;

int printf("Valeur de ma variable: %d ", maVariable);
int printf("L'emplacsement de ma variable sur mon disque : %p ", &maVariable);

int *monPointeur = NULL;

monPointeur = &maVariable;

int printf("Le pointeur dirige vers l'espace : %p ", monPointeur);
int printf("Le pointeur dirige vers l'espace : %d ", monPointeur);

int incre(int nombre){
    nombre += 1;
    return nombre
}

void incre(int nombre){
    *nombre += 1;
}

incre(&maVariable);


int enterTheTabloid(){
    int tableau[4];

    tableau[0] = 50;
    tableau[1] = 150;
    tableau[2] = 200;
    tableau[3] = 100;

    for (i=0; i < 4; i++){
        printf("%d \n", tableau[i]);
    }

    return 0;
}

