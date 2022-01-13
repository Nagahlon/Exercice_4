#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Algorithme voyage
//BUT affiche le nombre de ville par rapport à un nombre d'habitants
//ENTRE Nombre de lieux puis nombre d'habitants
//SORTIE Nombre de ville

VAR nbrelieu, nbrehab, nbreville, i : ENTIER

DEBUT

    ECRIRE "Programme Voyage"

    nbreville <- 0


    ECRIRE "Entrez le nombre de lieu"
    LIRE nbrelieu

    POUR i DE 1 A nbrelieu FAIRE PAS DE 1
    FAIRE
        ECRIRE "Entrez le nombre d'habitants de la ville " + i
        LIRE nbrehab
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
        printf("Entrez le nombre de lieu\n"); //On demande à l'utilisateur d'entrer une valeur
        scanf("%d", &nbrelieu); //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrelieu

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

VAR age, poids, ageaubrg, prix : ENTIER

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
        else{
            if (age<10){
                prix=prix+5;
            }
            else{
                prix=prix+30;
                if (poids>=20){
                prix=prix+10;
                }
            }
        }

        printf("La chambre vous coutera %d ecus", prix);

    //FIN*/


/*Algorithme start to play
//BUT creer une alerte et bloquer les entrees tant que la salle est pleine
//ENTRE nombre de personnes qui entre et nombre de personne qui sort
//SORTIE une alerte et un blocage de la salle si elle est pleine.

VAR nbrepers, pers, maxpers : ENTIER

DEBUT

    ECRIRE "Programme start to play"

    nbrepers <- 0
    pers <-0
    maxpers <- 250

    REPETER
        ECRIRE "Entrez le nombre de personnes entrantes ou sortantes" //On demande à l'utilisateur d'entrer une valeur
        LIRE nbrepers //On lit la valeur qu'entre l'utilisateur et on l'affecte à la variable nbrepers
        pers <- pers+nbrepers
        SI (pers>maxpers) //on verifie si des personnes peuvent encore rentrees
        FAIRE
            ECRIRE "Entree impossible"
            pers <- pers-nbrepers
        SINON
            SI (pers=maxpers) //on verifie si la salle est pleine
            FAIRE
                ECRIRE "Nombre Maximum Atteint"
    TANTQUE (pers!=0) //on sort de la boucle si la salle est vide

FIN*/

    //Exercice 3 - Start to play

    /*int nbrepers=0, pers=0, maxpers=250; //initialisation des variables

    //DEBUT

        do{
            printf("Entrez le nombre de personnes entrantes ou sortantes\n");
            scanf ("%d", &nbrepers);
            pers=pers+nbrepers;
            if (pers>maxpers){
                printf("Entree impossible\n\n");
                pers=pers-nbrepers;
            }
            else{
                if (pers==maxpers){
                    printf("Nombre Maximum Atteint\n\n");
                }
            }
        }while (pers!=0);

    //FIN*/


/*Algorithme triangle
//BUT affiche le prix en fonction de l'age et du poids des bagages du client
//ENTRE Poids des bagages et age de la personne
//SORTIE Prix de la chambre

VAR lignes, i, j, k : ENTIER

DEBUT

    ECRIRE "Programme Triangle"

    lignes <- 8

    POUR i DE 1 A lignes-3 FAIRE PAS DE 1
    FAIRE
        CAS ( i ) PARMI :
            CAS1: 1         ECRIRE "X\n"
            CAS2: 2         ECRIRE "XX\n"
            CAS3: 3         POUR j DE 1 A lignes-3 FAIRE PAS DE 1
                            FAIRE
                                ECRIRE "X"
                                POUR k DE 1 A j FAIRE PAS DE 1
                                FAIRE
                                    ECRIRE "O"
                                FINPOUR
                                ECRIRE "X\n"
                            FINPOUR

            CAS4: lignes    POUR j DE 1 A lignes FAIRE PAS DE 1
                            FAIRE
                                ECRIRE "X"
                            FINPOUR
        FINCASPARMI
    FINPOUR


FIN*/

    //Exercice 4 - Triangle

    /*int lignes=8, i=0, j=0, k=0; //initialisation des variables

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


/*Algorithme triangle bis
//BUT affiche le prix en fonction de l'age et du poids des bagages du client
//ENTRE Poids des bagages et age de la personne
//SORTIE Prix de la chambre

VAR lignes, colonnes, i, j, k : ENTIER

DEBUT

    ECRIRE "Programme Triangle Bis"

    lignes <- 10
    colonnes=lignes

    POUR i DE 0 A lignes FAIRE PAS DE 1
    FAIRE
        POUR k DE 1 A i FAIRE PAS DE 1
        FAIRE
            ECRIRE " "
        FINPOUR
        POUR j DE colonnes A 0 FAIRE PAS DE -1
        FAIRE
            ECRIRE i
        FINPOUR
        ECRIRE "\n"
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

    POUR i DE 1 A l FAIRE PAS DE 1
    FAIRE
        SI (i=1) ou (i=l)
        FAIRE
            POUR j DE 1 A L FAIRE PAS DE 1
            FAIRE
                ECRIRE c1
            FINPOUR
        SINON
        FAIRE
            ECRIRE c1
            POUR j DE 1 A L-2 FAIRE PAS DE 1
            FAIRE
                ECRIRE c2
            FINPOUR
            ECRIRE c1
        FINSI
        ECRIRE "\n"
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

VAR poptt, popinf, jours : ENTIER

DEBUT

    ECRIRE "Programme Epidemie"

    popinf <- 1
    jours <- 1

    ECRIRE "Entrez la population totale de la ville"
    LIRE poptt

    REPETER
        popinf <- popinf+popinf*2
        jours <- jours+1
    TANTQUE (popinf<=poptt)

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

VAR maxp, pierre, h : ENTIER

DEBUT

    ECRIRE "Entrez la quantite de pierres disponible"
    LIRE maxp

    TANT QUE (pierre + (h * h) < maxp)
    FAIRE
        pierre <- pierre + (h * h)
        h <- i + 1
    FINTANTQUE

    ECRIRE "La plus grande pyramide qui pourra etre construite montera de " + h-1 + " hauteurs3 et necessitera " + pierre + " pierres"

FIN*/

    //Exercice 7 - Pyramide

    int maxp=0, h=0, pierre=0; //initialisation des variables

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
