#include <stdio.h>

int main()
{

    printf("Bonjour.\n");
    printf("Je m'appelle Paul.\n");
    printf("J'apprends le langage C !\n");

    printf("\n");

    printf("Je m'appelle Liuxing.\n");
    printf("J'ai 15 ans.\n");
    printf("J'aime les jeux vidéos.\n");

    printf("\n");

    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");

    printf("\n");

    printf("+\n");
    printf("++\n");
    printf("+++\n");
    printf("++++\n");
    printf("+++++\n");

    printf("\n");

    printf("==============================\n");
    printf("       MA CARTE DE VISITE    \n");
    printf("==============================\n");
    printf("Nom : Liuxing\n");
    printf("Âge : 15 ans\n");
    printf("Classe : 5B\n");
    printf("Email : exemple@email.com\n");
    printf("==============================\n");


printf("L        I I I   U        U  X     X   I I I   N     N   G G G  \n");
printf("L          I     U        U   X   X      I     NN    N  G       \n");
printf("L          I     U        U    X X       I     N N   N  G   G G \n");
printf("L          I     U        U   X   X      I     N  N  N  G     G \n");
printf("L L L L  I I I     U U U U   X     X   I I I   N   N N   G G G  \n");

    printf("\n");

    printf("+----------------------------------+\n");
    printf("|          SUPER MARIO BROS          |\n");
    printf("+----------------------------------+\n");
    printf("| SCORE: 00250            LIVES: 3 |\n");
    printf("|                                  |\n");
    printf("|       [?]  [?]   [?]             |\n");
    printf("|                                  |\n");
    printf("|   @                      /\\      |\n");
    printf("====================================\n");

    printf("====================================\n");
    printf(" BIENVENUE DANS MON PROGRAMME\n");
    printf("====================================\n");
    printf("1. Jouer\n");
    printf("2. Options\n");
    printf("3. Quitter\n");
    printf("====================================\n");

    return 0;
}

// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    int age = 17;
    printf("Âge : %d\n", age);

    age = 18;
    printf("Nouvel âge : %d\n\n", age);


    // Exercice 1
    int a = 12;
    int b = 8;
    int somme = a + b;
    printf("La somme de %d et %d est : %d\n\n", a, b, somme);


    // Exercice 2
    double x = 15.0;
    double y = 4.0;
    printf("Addition       : %.2f\n", x + y);
    printf("Soustraction   : %.2f\n", x - y);
    printf("Multiplication : %.2f\n", x * y);
    printf("Division       : %.2f\n\n", x / y);


    // Exercice 3
    float temperature = 21.5;
    printf("La température actuelle est de : %.1f degrés C\n\n", temperature);


    // Exercice 4
    double longueur = 8.5;
    double largeur = 4.0;
    double aire = longueur * largeur;
    printf("L'aire du rectangle est : %.2f cm2\n\n", aire);


    // Exercice 5
    double perimetre = 2 * (longueur + largeur);
    printf("Le périmètre du rectangle est : %.2f cm\n\n", perimetre);


    // Exercice 6
    float note1 = 14.5;
    float note2 = 16.0;
    float note3 = 12.0;
    float moyenne = (note1 + note2 + note3) / 3.0;
    printf("Notes : %.1f, %.1f, %.1f\n", note1, note2, note3);
    printf("Ta moyenne est : %.2f\n\n", moyenne);


    // Exercice 7
    double prixHTVA = 100.0;
    double tauxTVA = 0.21; // TVA à 21%
    double prixTVAC = prixHTVA * (1 + tauxTVA);

    printf("--- Exercice 7 ---\n");
    printf("Prix HTVA : %.2f EUR\n", prixHTVA);
    printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);

  
    // Exercice 8
    double salaireMensuel = 2500.0;
    double salaireAnnuel = salaireMensuel * 12;

    printf("--- Exercice 8 ---\n");
    printf("Salaire mensuel : %.2f EUR\n", salaireMensuel);
    printf("Salaire annuel  : %.2f EUR\n\n", salaireAnnuel);


    // Exercice 9
    double kilometres = 5.5;
    double metres = kilometres * 1000;

    int heures = 2;
    int minutes = heures * 60;

    printf("--- Exercice 9 ---\n");
    printf("%.2f km = %.0f m\n", kilometres, metres);
    printf("%d heures = %d minutes\n\n", heures, minutes);



  
    float math = 15.0;
    float francais = 17.0;
    float sciences = 18.0;
    float moyennebulletin = (math + francais + sciences) / 3.0;

    printf("******** BULLETIN ********\n\n");
  
    printf("Math : %.0f\n", math);
    printf("Francais : %.0f\n", francais);
    printf("Sciences : %.0f\n\n", sciences);
    printf("Moyennebulletin : %.2f\n\n", moyennebulletin);
    printf("***************************\n");

    return 0;
}



// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    // Exercice 1
    int age;

    printf("Quel est ton âge ? ");
    scanf("%d", &age);

    printf("\nBonjour !\n");
    printf("Tu as %d ans.\n\n", age);


    // Exercice 2
    float nombre1, nombre2;
    float somme;


    printf("Saisissez le premier nombre : ");
    scanf("%f", &nombre1);

    printf("Saisissez le deuxième nombre : ");
    scanf("%f", &nombre2);

    somme = nombre1 + nombre2;

    printf("La somme est : %.2f\n\n", somme);


    // Exercice 3
    float a, b;

    printf("Saisissez le premier nombre : ");
    scanf("%f", &a);

    printf("Saisissez le deuxième nombre (non nul) : ");
    scanf("%f", &b);

    printf("Addition : %.2f\n", a + b);
    printf("Soustraction : %.2f\n", a - b);
    printf("Multiplication : %.2f\n", a * b);
    printf("Division : %.2f\n\n", a / b);


    // Exercice 4
    float longueur, largeur;
    float aire;

    printf("Saisissez la longueur : ");
    scanf("%f", &longueur);

    printf("Saisissez la largeur : ");
    scanf("%f", &largeur);

    aire = longueur * largeur;

    printf("L'aire du rectangle est : %.2f cm2\n\n", aire);


    // Exercice 5
    float perimetre;

    perimetre = 2 * (longueur + largeur);

    printf("Le périmètre est : %.2f cm\n\n", perimetre);


    // Exercice 6
    float note1, note2, note3;
    float moyenne;

    printf("Saisissez la première note : ");
    scanf("%f", &note1);

    printf("Saisissez la deuxième note : ");
    scanf("%f", &note2);

    printf("Saisissez la troisieme note : ");
    scanf("%f", &note3);

    moyenne = (note1 + note2 + note3) / 3;

    printf("Ta moyenne est : %.2f\n\n", moyenne);


    // Exercice 7
    float celsius, fahrenheit;

    printf("Saisissez la température en Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n\n",
           celsius, fahrenheit);


    // Exercice 8
    float prixHTVA, prixTVAC;

    printf("Saisissez le montant en euros : ");
    scanf("%f", &prixHTVA);

    prixTVAC = prixHTVA * 1.21;

    printf("Prix HTVA : %.2f EUR\n", prixHTVA);
    printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);


    // Exercice 9
    float poids, taille, imc;

    printf("Saisissez votre poids en kg : ");
    scanf("%f", &poids);

    printf("Saisissez votre taille en mètres : ");
    scanf("%f", &taille);

    imc = poids / (taille * taille);

    printf("Votre IMC est : %.2f\n\n", imc);


    // Exercice 10
    float capital, taux, interets;

    printf("Saisissez le capital en euros : ");
    scanf("%f", &capital);

    printf("Saisissez le taux d'intérêt en pourcentage : ");
    scanf("%f", &taux);

    interets = capital * taux / 100;

    printf("Les intérêts apres un an sont : %.2f EUR\n\n",
           interets);


    // Defi
    int ageFiche;
    float tailleFiche, poidsFiche;

    printf("=========================\n");
    printf("     MA FICHE PERSONNELLE\n");
    printf("=========================\n");

    printf("Saisissez votre âge : ");
    scanf("%d", &ageFiche);

    printf("Saisissez votre taille en mètres : ");
    scanf("%f", &tailleFiche);

    printf("Saisissez votre poids en kg : ");
    scanf("%f", &poidsFiche);

    printf("\n=========================\n");
    printf("        MA FICHE\n");
    printf("=========================\n");

    printf("Âge : %d ans\n", ageFiche);
    printf("Taille : %.2f m\n", tailleFiche);
    printf("Poids : %.1f kg\n", poidsFiche);

    printf("=========================\n");

    return 0;
}



// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    // Exercice 1
    int age;

    printf("Quel est ton âge ? ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Tu es majeur.\n\n");
    }
    else
    {
        printf("Tu es mineur.\n\n");
    }


    // Exercice 2
    int nombre;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 0)
    {
        printf("Le nombre est positif.\n\n");
    }
    else if (nombre < 0)
    {
        printf("Le nombre est négatif.\n\n");
    }
    else
    {
        printf("Le nombre est nul.\n\n");
    }


    // Exercice 3
    int nombrePair;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombrePair);

    if (nombrePair % 2 == 0)
    {
        printf("Le nombre est pair.\n\n");
    }
    else
    {
        printf("Le nombre est impair.\n\n");
    }


    // Exercice 4
    float note;

    printf("Saisissez votre note : ");
    scanf("%f", &note);

    if (note >= 10)
    {
        printf("Réussi.\n\n");
    }
    else
    {
        printf("Échec.\n\n");
    }


    // Exercice 5
    int a, b;

    printf("Saisissez le premier nombre : ");
    scanf("%d", &a);

    printf("Saisissez le deuxième nombre : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Le premier nombre est le plus grand.\n\n");
    }
    else if (b > a)
    {
        printf("Le deuxième nombre est le plus grand.\n\n");
    }
    else
    {
        printf("Les deux nombres sont egaux.\n\n");
    }


    // Exercice 6
    int ageUtilisateur;

    printf("Saisissez votre âge : ");
    scanf("%d", &ageUtilisateur);

    if (ageUtilisateur >= 0 && ageUtilisateur <= 12)
    {
        printf("Enfant.\n\n");
    }
    else if (ageUtilisateur >= 13 && ageUtilisateur <= 17)
    {
        printf("Adolescent.\n\n");
    }
    else if (ageUtilisateur >= 18)
    {
        printf("Adulte.\n\n");
    }
    else
    {
        printf("Âge invalide.\n\n");
    }


    // Exercice 7
    int nombreIntervalle;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombreIntervalle);

    if (nombreIntervalle >= 10 && nombreIntervalle <= 20)
    {
        printf("Le nombre est compris entre 10 et 20.\n\n");
    }
    else
    {
        printf("Le nombre n'est pas compris entre 10 et 20.\n\n");
    }


    // Exercice 8
    float dividende, diviseur;

    printf("Saisissez le premier nombre : ");
    scanf("%f", &dividende);

    printf("Saisissez le deuxième nombre : ");
    scanf("%f", &diviseur);

    if (diviseur != 0)
    {
        printf("Résultat de la division : %.2f\n\n",
               dividende / diviseur);
    }
    else
    {
        printf("La division est impossible : le diviseur vaut zéro.\n\n");
    }


    // Exercice 9
    int nombreDivisible;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombreDivisible);

    if (nombreDivisible % 3 == 0 && nombreDivisible % 5 == 0)
    {
        printf("Le nombre est divisible par 3 et par 5.\n\n");
    }
    else
    {
        printf("Le nombre n'est pas divisible par 3 et par 5.\n\n");
    }


    // Exercice 10
    float noteFinale;

    printf("Saisissez une note sur 20 : ");
    scanf("%f", &noteFinale);

    if (noteFinale < 0 || noteFinale > 20)
    {
        printf("Cette note n’est pas valide.\n\n");
    }
    else if (noteFinale >= 16)
    {
        printf("Très bien.\n\n");
    }
    else if (noteFinale >= 14)
    {
        printf("Bien.\n\n");
    }
    else if (noteFinale >= 10)
    {
        printf("Suffisant.\n\n");
    }
    else
    {
        printf("Insuffisant.\n\n");
    }


    return 0;
}



// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    // Exercice 1
    int choix1;

    printf("1. Bonjour\n");
    printf("2. Bonsoir\n");
    printf("3. Salut\n");
    printf("4. Au revoir\n");
    printf("Votre choix : ");
    scanf("%d", &choix1);

    switch (choix1)
    {
        case 1:
            printf("Bonjour !\n\n");
            break;

        case 2:
            printf("Bonsoir !\n\n");
            break;

        case 3:
            printf("Salut !\n\n");
            break;

        case 4:
            printf("Au revoir !\n\n");
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    // Exercice 2
    int choix2;
    float a, b;

    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Votre choix : ");
    scanf("%d", &choix2);

    printf("Saisissez le premier nombre : ");
    scanf("%f", &a);

    printf("Saisissez le deuxième nombre : ");
    scanf("%f", &b);

    switch (choix2)
    {
        case 1:
            printf("Résultat : %.2f\n\n", a + b);
            break;

        case 2:
            printf("Résultat : %.2f\n\n", a - b);
            break;

        case 3:
            printf("Résultat : %.2f\n\n", a * b);
            break;

        case 4:
            if (b != 0)
            {
                printf("Résultat : %.2f\n\n", a / b);
            }
            else
            {
                printf("La division est impossible : le diviseur vaut zéro.\n\n");
            }
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    // Exercice 3
    int choix3;
    float valeur;

    printf("1. Kilomètres vers mètres\n");
    printf("2. Metres vers kilomètres\n");
    printf("3. Celsius vers Fahrenheit\n");
    printf("4. Fahrenheit vers Celsius\n");
    printf("Votre choix : ");
    scanf("%d", &choix3);

    printf("Saisissez la valeur : ");
    scanf("%f", &valeur);

    switch (choix3)
    {
        case 1:
            printf("%.2f km = %.2f mètres\n\n", valeur, valeur * 1000);
            break;

        case 2:
            printf("%.2f mètres = %.2f km\n\n", valeur, valeur / 1000);
            break;

        case 3:
            printf("%.2f Celsius = %.2f Fahrenheit\n\n",
                   valeur, valeur * 9 / 5 + 32);
            break;

        case 4:
            printf("%.2f Fahrenheit = %.2f Celsius\n\n",
                   valeur, (valeur - 32) * 5 / 9);
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    // Exercice 4
    int choix4;
    float prixHTVA, prixTVAC;

    printf("1. TVA 6 %%\n");
    printf("2. TVA 12 %%\n");
    printf("3. TVA 21 %%\n");
    printf("Votre choix : ");
    scanf("%d", &choix4);

    printf("Saisissez le prix HTVA : ");
    scanf("%f", &prixHTVA);

    switch (choix4)
    {
        case 1:
            prixTVAC = prixHTVA * 1.06;
            printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);
            break;

        case 2:
            prixTVAC = prixHTVA * 1.12;
            printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);
            break;

        case 3:
            prixTVAC = prixHTVA * 1.21;
            printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    // Exercice 5
    int choix5;
    float math = 14;
    float francais = 16;
    float sciences = 18;
    float moyenne;

    printf("1. Voir les points\n");
    printf("2. Calculer la moyenne\n");
    printf("3. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix5);

    switch (choix5)
    {
        case 1:
            printf("Math : %.1f\n", math);
            printf("Francais : %.1f\n", francais);
            printf("Sciences : %.1f\n\n", sciences);
            break;

        case 2:
            moyenne = (math + francais + sciences) / 3;
            printf("Ta moyenne est : %.2f\n\n", moyenne);
            break;

        case 3:
            printf("Fin du menu scolaire.\n\n");
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    // Exercice 6
    int jour;

    printf("Saisissez un nombre entre 1 et 7 : ");
    scanf("%d", &jour);

    switch (jour)
    {
        case 1:
            printf("Lundi\n\n");
            break;

        case 2:
            printf("Mardi\n\n");
            break;

        case 3:
            printf("Mercredi\n\n");
            break;

        case 4:
            printf("Jeudi\n\n");
            break;

        case 5:
            printf("Vendredi\n\n");
            break;

        case 6:
            printf("Samedi\n\n");
            break;

        case 7:
            printf("Dimanche\n\n");
            break;

        default:
            printf("Ce jour n’est pas valide.\n\n");
    }


    // Exercice 7
    int mois;

    printf("Saisissez un nombre entre 1 et 12 : ");
    scanf("%d", &mois);

    switch (mois)
    {
        case 1:
            printf("Janvier\n\n");
            break;

        case 2:
            printf("Février\n\n");
            break;

        case 3:
            printf("Mars\n\n");
            break;

        case 4:
            printf("Avril\n\n");
            break;

        case 5:
            printf("Mai\n\n");
            break;

        case 6:
            printf("Juin\n\n");
            break;

        case 7:
            printf("Juillet\n\n");
            break;

        case 8:
            printf("Août\n\n");
            break;

        case 9:
            printf("Septembre\n\n");
            break;

        case 10:
            printf("Octobre\n\n");
            break;

        case 11:
            printf("Novembre\n\n");
            break;

        case 12:
            printf("Décembre\n\n");
            break;

        default:
            printf("Ce mois n’est pas valide.\n\n");
    }


    // Exercice 8
    int choix8;

    printf("1. Nouveau\n");
    printf("2. Ouvrir\n");
    printf("3. Enregistrer\n");
    printf("4. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix8);

    switch (choix8)
    {
        case 1:
            printf("Nouveau fichier créé.\n\n");
            break;

        case 2:
            printf("Ouverture du fichier.\n\n");
            break;

        case 3:
            printf("Fichier enregistré.\n\n");
            break;

        case 4:
            printf("Fermeture du programme.\n\n");
            break;

        default:
            printf("Ce choix n’est pas valide.\n\n");
    }


    return 0;
}




// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    // Exercice 1
    int i;


    for (i = 1; i <= 20; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");


    // Exercice 2


    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("Décollage !\n\n");


    // Exercice 3


    for (i = 2; i <= 50; i += 2)
    {
        printf("%d\n", i);
    }

    printf("\n");


    // Exercice 4


    for (i = 5; i <= 100; i += 5)
    {
        printf("%d\n", i);
    }

    printf("\n");


    // Exercice 5
    int somme = 0;


    for (i = 1; i <= 100; i++)
    {
        somme = somme + i;
    }

    printf("La somme de 1 a 100 est : %d\n\n", somme);


    // Exercice 6
    int nombre;

    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    printf("\n");


    // Exercice 7
    int code;


    do
    {
        printf("Saisissez le code : ");
        scanf("%d", &code);

        if (code != 1234)
        {
            printf("Code incorrect. Réessaiez.\n");
        }

    } while (code != 1234);

    printf("Acces autorise.\n\n");


    // Exercice 8
    int choix;
    float a, b;
    int recommencer = 1;


    while (recommencer == 1)
    {
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        printf("Saisissez le premier nombre : ");
        scanf("%f", &a);

        printf("Saisissez le deuxième nombre : ");
        scanf("%f", &b);

        switch (choix)
        {
            case 1:
                printf("Résultat : %.2f\n", a + b);
                break;

            case 2:
                printf("Résultat : %.2f\n", a - b);
                break;

            case 3:
                printf("Résultat : %.2f\n", a * b);
                break;

            case 4:
                if (b != 0)
                {
                    printf("Résultat : %.2f\n", a / b);
                }
                else
                {
                    printf("La division est impossible : le diviseur vaut zéro.\n");
                }
                break;

            default:
                printf("Ce choix n’est pas valide.\n");
        }

        printf("\nVoulez-vous recommencer ?\n");
        printf("1. Oui\n");
        printf("0. Non\n");
        scanf("%d", &recommencer);

        printf("\n");
    }


    // Exercice 9
    float note;
    float total = 0;
    int compteur = 0;
    float moyenne;


    printf("Saisissez une note (-1 pour terminer) : ");
    scanf("%f", &note);

    while (note != -1)
    {
        total = total + note;
        compteur++;

        printf("Saisissez une note (-1 pour terminer) : ");
        scanf("%f", &note);
    }

    if (compteur > 0)
    {
        moyenne = total / compteur;
        printf("Ta moyenne est : %.2f\n\n", moyenne);
    }
    else
    {
        printf("Aucune note n’a été saisie.\n\n");
    }


    // Exercice 10
    int secret = 7;
    int reponse;


    do
    {
        printf("Devinez le nombre secret : ");
        scanf("%d", &reponse);

        if (reponse < secret)
        {
            printf("Trop petit.\n");
        }
        else if (reponse > secret)
        {
            printf("Trop grand.\n");
        }
        else
        {
            printf("Bravo !\n\n");
        }

    } while (reponse != secret);


    // Defi
    int choixBoisson;


    do
    {
        printf("====================\n");
        printf("   DISTRIBUTEUR\n");
        printf("====================\n");
        printf("1. Café\n");
        printf("2. Thé\n");
        printf("3. Chocolat chaud\n");
        printf("0. Quitter\n");
        printf("====================\n");
        printf("Votre choix : ");
        scanf("%d", &choixBoisson);

        switch (choixBoisson)
        {
            case 1:
                printf("Vous avez choisi un cafe.\n\n");
                break;

            case 2:
                printf("Vous avez choisi un the.\n\n");
                break;

            case 3:
                printf("Vous avez choisi un chocolat chaud.\n\n");
                break;

            case 0:
                printf("Merci et a bientot !\n\n");
                break;

            default:
                printf("Ce choix n’est pas valide.\n\n");
        }

    } while (choixBoisson != 0);


    return 0;
}


// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    int i, nombre;
    int puissance;
    int factorielle;
    int somme;

    // Exercice 1
    for(i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }

    // Exercice 2
    for(i = 20; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    printf("Décollage !\n");

    // Exercice 3
    for(i = 2; i <= 100; i = i + 2)
    {
        printf("%d\n", i);
    }

    // Exercice 4
    for(i = 3; i <= 99; i = i + 3)
    {
        printf("%d\n", i);
    }

    // Exercice 5
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    // Exercice 6
    puissance = 1;

    for(i = 1; i <= 10; i++)
    {
        puissance = puissance * 2;
        printf("2^%d = %d\n", i, puissance);
    }

    // Exercice 7
    printf("Saisissez un entier positif : ");
    scanf("%d", &nombre);

    factorielle = 1;

    for(i = 1; i <= nombre; i++)
    {
        factorielle = factorielle * i;
    }

    printf("%d! = %d\n", nombre, factorielle);

    // Exercice 8
    somme = 0;

    for(i = 1; i <= 10; i++)
    {
        somme = somme + i * i;
    }

    printf("Somme des carrés = %d\n", somme);

    // Exercice 9
    for(i = 5; i <= 100; i = i + 5)
    {
        printf("%d\n", i);
    }

    // Exercice 10
    for(i = 1; i <= 10; i++)
    {
        printf("*");
    }

    printf("\n");

    return 0;
}


// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

int main()
{
    int i, j;
    int lignes, colonnes;

    // Exercice 1
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Exercice 2
    printf("Nombre de lignes : ");
    scanf("%d", &lignes);

    printf("Nombre de colonnes : ");
    scanf("%d", &colonnes);

    for(i = 1; i <= lignes; i++)
    {
        for(j = 1; j <= colonnes; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Exercice 3
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Exercice 4
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Exercice 5
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Exercice 6
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    // Exercice 7
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }
        printf("\n");
    }

    // Exercice 8
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }

    // Exercice 9
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    // Exercice 10
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            if(i == 1 || i == 4 || j == 1 || j == 10)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

// Exercice 1
void afficherTitre()
{
    printf("====================\n");
    printf("MON PROGRAMME\n");
    printf("====================\n");
}

// Exercice 2
void afficherMenu()
{
    printf("=== MENU ===\n");
    printf("1. Jouer\n");
    printf("2. Quitter\n");
}

void afficherFin()
{
    printf("Fin du programme !\n");
}

// Exercice 3
int carre(int nombre)
{
    return nombre * nombre;
}

// Exercice 4
int cube(int nombre)
{
    return nombre * nombre * nombre;
}

// Exercice 5
int maximum(int nombre1, int nombre2)
{
    if(nombre1 > nombre2)
    {
        return nombre1;
    }
    else
    {
        return nombre2;
    }
}

// Exercice 6
int pair(int nombre)
{
    if(nombre % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Exercice 7
float moyenne(float note1, float note2)
{
    return (note1 + note2) / 2;
}

int main()
{
    int nombre;
    int nombre1, nombre2;
    float note1, note2;

    // Exercice 1
    afficherTitre();

    // Exercice 2
    afficherMenu();
    afficherFin();

    // Exercice 3
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    printf("Carre = %d\n", carre(nombre));

    // Exercice 4
    printf("Cube = %d\n", cube(nombre));

    // Exercice 5
    printf("Saisissez deux nombres : ");
    scanf("%d %d", &nombre1, &nombre2);

    printf("Maximum = %d\n", maximum(nombre1, nombre2));

    // Exercice 6
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    if(pair(nombre) == 1)
    {
        printf("Le nombre est pair\n");
    }
    else
    {
        printf("Le nombre est impair\n");
    }

    // Exercice 7
    printf("Saisissez deux notes : ");
    scanf("%f %f", &note1, &note2);

    printf("Moyenne = %.2f\n", moyenne(note1, note2));

    return 0;
}



// --------------------------------------------------
// Nouveau programme
// --------------------------------------------------
#include <stdio.h>

// Exercice 1
void afficherNombre(int nombre)
{
    printf("Nombre = %d\n", nombre);
}

// Exercice 2
int carre(int nombre)
{
    return nombre * nombre;
}

// Exercice 3
int cube(int nombre)
{
    return nombre * nombre * nombre;
}

// Exercice 4
int addition(int a, int b)
{
    return a + b;
}

// Exercice 5
int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Exercice 6
float aireRectangle(float longueur, float largeur)
{
    return longueur * largeur;
}

// Exercice 7
float calculTVA(float prixHT)
{
    return prixHT * 1.21;
}

// Exercice 8
void tableMultiplication(int nombre)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }
}

int main()
{
    int nombre;
    int a, b;
    float longueur, largeur;
    float prixHT;

    // Exercice 1
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    afficherNombre(nombre);

    // Exercice 2
    printf("Carre de %d = %d\n", nombre, carre(nombre));
    printf("Carre de 5 = %d\n", carre(5));
    printf("Carre de 10 = %d\n", carre(10));

    // Exercice 3
    printf("Cube de %d = %d\n", nombre, cube(nombre));

    // Exercice 4
    printf("Saisissez deux nombres : ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", addition(a, b));

    // Exercice 5
    printf("Maximum = %d\n", maximum(a, b));

    // Exercice 6
    printf("Saisissez la longueur : ");
    scanf("%f", &longueur);

    printf("Saisissez la largeur : ");
    scanf("%f", &largeur);

    printf("Aire = %.2f\n", aireRectangle(longueur, largeur));

    // Exercice 7
    printf("Saisissez le prix HT : ");
    scanf("%f", &prixHT);

    printf("Prix TVAC = %.2f\n", calculTVA(prixHT));

    // Exercice 8
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    tableMultiplication(nombre);

    return 0;
}
