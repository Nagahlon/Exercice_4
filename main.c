#include <stdio.h>
#include <stdlib.h>
#define MAXPERS 250

int main()
{
/*Algorithme voyage
//BUT affiche le nombre de ville par rapport à un nombre d'habitants
//ENTRE Nombre de lieux puis nombre d'habitants
//SORTIE Nombre de ville

VAR nbrelieu, nbrehab, nbreville, i : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme Voyage"

    nbreville <- 0

    ECRIRE "Entrez le nombre de lieu" //On demande à l'utilisateur d'entrer une valeur
    LIRE nbrelieu //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrelieu

    POUR i DE 1 A nbrelieu FAIRE PAS DE 1 //on repete pour le nombre de lieu rentre
    FAIRE
        ECRIRE "Entrez le nombre d'habitants de la ville " + i //On demande à l'utilisateur d'entrer une valeur
        LIRE nbrehab //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrehab

        SI (nbrehab>10000) //verifie si le lieu est une ville
        FAIRE
            nbreville <- nbreville+1 //compteur de nombre de ville
        FINSI
    FINPOUR

    //une boucle pour entrez le nombre d'habitant de chaque lieu

    ECRIRE "Vous avez voyagez dans " + nbreville + " villes"

FIN*/

    //Exercice 1 - Voyage

    /*int nbrelieu=0, nbrehab=0, nbreville=0, i=0; //initialisation des variables

    //DEBUT

        printf("Entrez le nombre de lieu\n");
        scanf("%d", &nbrelieu);

        for (i=1 ; i <= nbrelieu ; i++)
        {
            printf("\nEntrez le nombre d'habitants de la ville %d\n", i);
            scanf("%d", &nbrehab);

            if (nbrehab>10000){
                nbreville=nbreville+1;
            }
        }

        printf("Vous avez voyagez dans %d villes", nbreville);

    //FIN*/


/*Algorithme auberge
//BUT affiche le prix en fonction de l'age et du poids des bagages du client
//ENTRE Poids des bagages et age de la personne
//SORTIE Prix de la chambre

VAR age, poids, ageaubrg, prix : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme Auberge"

    prix <- 0
    ageaubrg <- 60

    ECRIRE "Entrez le poids des bagages du client" //On demande à l'utilisateur d'entrer une valeur
    LIRE poids //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable poids
    ECRIRE "Entrez l'age du client" //On demande à l'utilisateur d'entrer une valeur
    Lire age //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable age

    SI (age=ageaubrg) //on verifie si l'age correspond a celui de l'aubergiste
    FAIRE
        prix <- 0
    SINON
        SI (age<10) //on verifie si le client est un enfant
        FAIRE
            prix <- prix+5

        SINON
            prix <- prix+30

            SI (poids >= 20) //on verifie le poids des bagages
            FAIRE
                prix <- prix+10
            FINSI
        FINSI
    FINSI

    ECRIRE "La chambre vous coutera " + prix + " ecus"

FIN*/

    //Exercice 2 - Auberge

    /*int age=0, poids=0, ageaubrg=60, prix=0; //initialisation des variables
    //DEBUT
        printf("Entrez le poids des bagages du client\n"); //On demande à l'utilisateur d'entrer une valeur
        scanf("%d", &poids); //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrelieu
        printf("Entrez l'age du client\n"); //On demande à l'utilisateur d'entrer une valeur
        scanf("%d", &age); //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrelieu

        if (age==ageaubgr){
            prix=0;
        }
        else
            if (age<10){
                prix=prix+5;
            }
            else{
                prix=prix+30;

                if (poids>=20){
                prix=prix+10;
                }
            }


        printf("La chambre vous coutera %d ecus", prix);

    //FIN*/


/*Algorithme start to play
//BUT creer une alerte et bloquer les entrees tant que la salle est pleine
//ENTRE nombre de personnes qui entre et nombre de personne qui sort
//SORTIE une alerte et un blocage de la salle si elle est pleine.

CONST MAXPERS<-250 : ENTIER
VAR nbrepers, pers : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme start to play"

    nbrepers <- 0
    pers <-0
    maxpers <- 250 //correction

    REPETER
        ECRIRE "Entrez le nombre de personnes entrantes ou sortantes" //On demande à l'utilisateur d'entrer une valeur
        LIRE nbrepers //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrepers

        pers <- pers+nbrepers

        SI (pers<=0 OU pers>maxpers) //on verifie si des personnes peuvent encore rentrees
        FAIRE
            ECRIRE "Valeurs impossible"
            pers <- pers-nbrepers
        SINON
            SI (pers=MAXPERS) //on verifie si la salle est pleine
            FAIRE
                ECRIRE "Nombre Maximum Atteint"

            FINSI
        FINSI
        ECRIRE pers
    TANTQUE (pers<>-1) //on sort de la boucle si la salle est vide
    FINREPETER

FIN*/

    //Exercice 3 - Start to play

    /*int nbrepers=0, pers=0; //initialisation des variables

    //DEBUT

        do{
            printf("Entrez le nombre de personnes entrantes ou sortantes\n");
            scanf ("%d", &nbrepers);

            pers=pers+nbrepers;

            if (pers<=0 || pers>MAXPERS){
                printf("Valeurs impossible\n\n");
                pers=pers-nbrepers;
            }else{
                if (pers==MAXPERS){
                    printf("Nombre Maximum Atteint\n\n");
                }
            }
            printf("%d\n", pers);
        }while (pers!=-1);


    //FIN*/


/*Algorithme triangle
//BUT affiche le prix en fonction de l'age et du poids des bagages du client
//ENTRE Poids des bagages et age de la personne
//SORTIE Prix de la chambre

VAR lignes, i, j, k : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme Triangle"

    lignes <- 8

    POUR i DE 1 A lignes-3 FAIRE PAS DE 1 //comme on trace specifiquement trois lignes on repetes pour le nombre de lignes indique reduit de trois
    FAIRE
        CAS ( i ) PARMI :
            CAS1: 1         ECRIRE "X\n" //on fait la premiere ligne du triangle
            CAS2: 2         ECRIRE "XX\n" //on fait la deuxième ligne du triangle
            CAS3: 3         POUR j DE 1 A lignes-3 FAIRE PAS DE 1 //comme on trace specifiquement trois lignes on repetes pour le nombre de lignes indique reduit de trois
                            FAIRE
                                ECRIRE "X"
                                POUR k DE 1 A j FAIRE PAS DE 1 //chaque ligne repete autant le charactere O que l'increment j
                                FAIRE
                                    ECRIRE "O"
                                FINPOUR
                                ECRIRE "X\n"
                            FINPOUR //on fait toutes les lignes jusqu'à l'avant dernière

            CAS4: lignes    POUR j DE 1 A lignes FAIRE PAS DE 1
                            FAIRE
                                ECRIRE "X"
                            FINPOUR //on fait la dernière ligne
        FINCASPARMI
    FINPOUR

FIN*/


    //Exercice 4 - Triangle

    /*int lignes=100, i=0, j=0, k=0; //initialisation des variables

    //DEBUT

    for (i=1 ; i <= lignes-3 ; i++){
        switch (i) {
            case 1:{
                printf("X\n");
            }
            break;
            case 2:{
                printf("XX\n");
            }
            break;
            case 3:{
                for (j=1 ; j <= lignes-3 ; j++){
                    printf("X");
                    for (k=1 ; k <= j ; k++){
                        printf("O");
                    }
                    printf("X\n");
                }
            }
            break;
            case 4:{
                for (j=1 ; j <= lignes ; j++){
                    printf("X");
                }
            }
            break;
        }
    }

    //FIN*/

    //TEST CORRECTION

    /*int lignes=8, i=0, j=0;

    for (i=0 ; i<=lignes ; i++){
        if  (i<3 || i==lignes){
            for(j=0 ; j<i ; j++){
                printf("X");
            }
            printf("\n");
        }else{
            printf("X");
            for (j=0 ; j<i-2 ; j++){
                printf("O");
            }
            printf("X\n");
        }
    }*/

    //remarque c'est ce que j'ai fait pour le carré
    //au final prendre sous l'angle d'un tableau/matrice

    //CORRECTION !

    /*int taille=8; i=0, j=0;

    for(i=1;i<=tailles;i++){
        for(j=i;j<=taille;j++){
            if(j==1||i==j||i==taille){
                printf("X")
            }else if(j<i){
                printf("O")
            }
        }
        printf("\n")
    }*/


/*Algorithme triangle bis
//BUT affiche le prix en fonction de l'age et du poids des bagages du client
//ENTRE Poids des bagages et age de la personne
//SORTIE Prix de la chambre

VAR lignes, colonnes, i, j, k : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme Triangle Bis"

    lignes <- 10
    colonnes=lignes

    POUR i DE 0 A lignes FAIRE PAS DE 1 //on repete le nombre de ligne du triangle
    FAIRE
        POUR k DE 1 A i FAIRE PAS DE 1
        FAIRE
            ECRIRE " "
        FINPOUR

//on insere les espaces pour inverser le triangle

        POUR j DE colonnes A 0 FAIRE PAS DE -1
        FAIRE
            ECRIRE i
        FINPOUR

//on repete le nombre de colonne par ligne du triangle

        ECRIRE "\n" //retour a la ligne pour chaque changement de ligne du triangle
    FINCASPARMI

FIN*/

    //Exercice 4 bis - Triangle bis

    /*int lignes=10, colonnes=lignes, i=0, j=0, k=0; //initialisation des variables

    //DEBUT

    for (i=0 ; i < lignes ; i++){
        for (k=1 ; k <=i ; k++){
            printf(" ");
        }
        for (j=colonnes ; j > 0 ; j--){
            printf("%d", i);
        }
        colonnes=colonnes-1;
        printf("\n");
    }*/

    //CORRECTION !
    int lignes=10, i=0, j=0;

    for(i=0;i<lignes;i++){
        for(j=0;j<lignes;j++){
            if(j<i){
                printf(" ");
            }else printf("%d", i);
        }
        printf("\n");
    }

    //FIN*/


/*Algorithme carre
//BUT affiche un rectangle dont les dimensions, les caracteres du contours et de l'intérieux sont defini par l'utilisateur
//ENTRE longueur, largeur, characteres contours et intérieur
//SORTIE un carre trace par les parametres entres

VAR L, l, i, j : ENTIER
    c1, c2 : CHARACTERE

DEBUT

    ECRIRE "Programme Carre"

    ECRIRE "Entrez la longueur"
    LIRE L
    ECRIRE "Entrez la largeur"
    LIRE l
    ECRIRE "Entrez le charactere du contours"
    LIRE c1
    ECRIRE "Entrez le charactere du remplissage"
    LIRE c2

    //integration des parametres du carre

    POUR i DE 1 A l FAIRE PAS DE 1 //largeur du carre
    FAIRE
        SI (i=1) ou (i=l) //on verifie pour tracer la premiere et derniere ligne du carre
        FAIRE
            POUR j DE 1 A L FAIRE PAS DE 1
            FAIRE
                ECRIRE c1
            FINPOUR
        SINON //le reste pour tracer toutes les autres lignes du carre
        FAIRE
            ECRIRE c1
            POUR j DE 1 A L-2 FAIRE PAS DE 1
            FAIRE
                ECRIRE c2
            FINPOUR
            ECRIRE c1
        FINSI
        ECRIRE "\n" //retour a la ligne pour chaque changement de ligne du carre
    FINPOUR

FIN*/

    //Exercice 5 - Carre

    /*int L=0, l=0, i=0, j=0; //initialisation des variables
    char c1, c2; //initialisation des variables characteres

    //DEBUT

    printf("Entrez la longueur\n");
    scanf("%d", &L);
    printf("Entrez la largeur\n");
    scanf("%d", &l);
    printf("Entrez le charactere du contours\n");
    scanf(" %c", &c1);
    printf("Entrez le charactere du contours\n");
    scanf(" %c", &c2);

    for (i=1 ; i <= l ; i++){
        if(i==1 || i==l){
            for (j=1 ; j <=L ; j++){
                printf("%c", c1);
            }
        }
        else{
            printf("%c", c1);
            for (j=1 ; j <=L-2 ; j++){
                printf("%c", c2);
            }
            printf("%c", c1);
        }
        printf("\n");
    }

    //FIN*/


/*Algorithme epidemie
//BUT definit en combien de jours toute la population d'une ville est malade
//ENTRE la population totale de la ville
//SORTIE nombre de jours avant que la ville entiere soit malade

VAR poptt, popinf, jours : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Programme Epidemie"

    popinf <- 1
    jours <- 1

    ECRIRE "Entrez la population totale de la ville" //On demande à l'utilisateur d'entrer une valeur
    LIRE poptt //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable poptt

    REPETER
        popinf <- popinf+popinf*2
        jours <- jours+1
    TANTQUE (popinf<=poptt) //verifie tant que la population infectee est inferieur ou egale  a la population totale

    ECRIRE "La ville sera intierement infectee en " + jours + " jours"

FIN*/

    //Exercice 6 - Epidemie

    /*int poptt=0, popinf=1, jours=1; //initialisation des variables

    //DEBUT

    printf("Entrez la population totale de la ville\n");
    scanf("%d", &poptt);

    do{
        popinf=popinf+popinf*2;
        jours=jours+1;
    }while (popinf<=poptt);


    printf("La ville sera intierement infectee en %d jours", jours);

    //FIN*/


/*Algorithme pyramide
//BUT definit en combien de jours toute la population d'une ville est malade
//ENTRE la population totale de la ville
//SORTIE nombre de jours avant que la ville entiere soit malade

VAR maxp, pierre, h : ENTIER //initialisation des variables

DEBUT

    ECRIRE "Entrez la quantite de pierres disponible" //On demande à l'utilisateur d'entrer une valeur
    LIRE maxp //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable maxp

    TANT QUE (pierre + (h * h) < maxp) //on verifie a l'avance si le calcul depassera le total de pierre disponible
    FAIRE
        pierre <- pierre + (h * h) //on effectue le calcul
        h <- i + 1 //un compteur pour chaque hauteur
    FINTANTQUE

    ECRIRE "La plus grande pyramide qui pourra etre construite montera de " + h-1 + " hauteurs3 et necessitera " + pierre + " pierres"

FIN*/

    //Exercice 7 - Pyramide

    /*int maxp=0, h=0, pierre=0; //initialisation des variables

    //DEBUT

    printf("Entrez la quantite de pierres disponible\n");
    scanf("%d", &maxp);

    while(pierre+h*h<maxp){
        pierre=pierre+h*h;
        h=h+1;
    }

    printf("La plus grande pyramide possible fera %d hauteurs et %d pierre", h-1, pierre);

    //FIN*/
}
