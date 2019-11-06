# Séance 3: Entrées et sorties et Linux

**Note** : (_facultatif_) S'il y a des questions dans ce labo, répondez y dans un fichier nommé
`./labo/reponse-labo.md`.  Le fichier doit être dans un format `Markdown`. Utilisez le projet
`inf3135-a2019` pour déposer le fichier demandé. Utiliser le même fichier pour tous les exercices.

##### Format du fichier Markdown
 + Séance 2 (Header 1)
 + Exercice {1..n} (H2)
 + Question {1..n} (H4)
 + S`2`.E`3`.Q`1` (strong) `est une valeur qui change bien sûr`
 + La réponse dans une section script (code block)

**Note**: Il est recommandé de versionner vos réponses aux exercices à l'aide
de Git. Un seul dépôt est amplement suffisant pour tous les laboratoires, en
divisant les fichiers dans des répertoires.

 > > Pourquoi versionner vos exercices avec Git: afin de
vous entraîner à utiliser le logiciel (commandes) naturellement.

## 1 - Fichiers et affichage formaté

Écrivez un petit programme C qui prend en entrée le nom d'un fichier texte
contenant une liste de villes avec certaines caractéristiques et qui affiche
sous forme de tableau formaté ces informations.

Par exemple, si le fichier d'entrée contient les lignes suivantes (ce sont
les 10 villes les plus populeuses selon la base de données GeoNames):

```
Shanghai,China,22315474
Buenos Aires,Argentina,13076300
Mumbai,India,12691836
Mexico City,Mexico,12294193
Beijing,China,11716620
Karachi,Pakistan,11624219
Istanbul,Turkey,11174257
Tianjin,China,11090314
Guangzhou,China,11071424
Delhi,India,10927986
```

alors, on obtiendrait l'affichage suivant:

```
Rang  Nom           Pays  Population
----  ---           ----  ----------
0001  Shanghai      Chin    22315474
0002  Buenos Aires  Arge    13076300
0003  Mumbai        Indi    12691836
0004  Mexico City   Mexi    12294193
0005  Beijing       Chin    11716620
0006  Karachi       Paki    11624219
0007  Istanbul      Turk    11174257
0008  Tianjin       Chin    11090314
0009  Guangzhou     Chin    11071424
0010  Delhi         Indi    10927986
```

Plus précisément, vous devez respecter les contraintes suivantes:

- Le rang doit occuper 4 colonnes en ajoutant des zéros en préfixe si nécessaire;
- Le nom de la ville doit occuper au plus 15 colonnes (il faut couper le mot s'il y a un excédent);
- Le pays doit occuper exactement 4 colonnes aussi (il faut couper sinon);
- La population doit être alignée à droite.

## 2 - Fouille dans un tableau

Écrivez une fonction C dont la signature est

```c
unsigned int trouverElement(const double tableau[],
                            unsigned int taille,
                            double element);
```

Votre fonction retourne
 + 0 si l'élément n'est pas présent;
 + l'indice dans le tableau si l'élément est présent;
 
 Q1. Que se passe-t-il si l'élément se trouve à l'index zéro ?
 Q2. Que peut-on changer pour éviter ce problème ?

## 3 - Commandes d'une ligne (Linux)

À l'aide des programmes spécifiés entre parenthèses et des tubes (pipes),
écrivez une commande d'une ligne qui effectue les tâches demandées:

#### Questions
+ Q1. (man, head) Sauvegardez les 20 premières lignes du "manuel d'instructions"
   de la fonction `printf` dans un fichier nommé `man-printf.txt`.
   
+ Q2. (curl, grep) Affichez toutes les lignes qui contiennent le mot `tableau` dans
   le fichier `seance-03.md` disponible dans le dépôt distant. (ce fichier)
   
+ Q3. (git log, grep, sort, uniq) Affichez tous les contributeurs d'un projet
   versionné avec git. Par exemple, j'obtiens le résultat suivant pour le
   projet [TMX](https://github.com/baylej/tmx), que j'ai utilisé par le passé:

    ```
    Author: Alex Tennant <adtennant@gmail.com>
    Author: Alex Tennant <alex.tennant@desynit.com>
    Author: Alex Tennant <alte@Alexs-MBP.home>
    Author: Alexandre Blondin Massé <alexandre.blondin.masse@gmail.com>
    Author: Bayle Jonathan <bayle.jonathan@gmail.com>
    Author: Bayle Jonathan <baylej@mrhide.fr>
    Author: RPG Hacker <markus_wall@web.de>
    Author: U-hide-hard\hide <hide@hide-hard.(none)>
    Author: baylej <baylej@mrhide.fr>
    Author: baylej <hide@hide-hard.(none)>
    Author: pedrohlc <pedro.laracampos@gmail.com>
    ```

+ Q4. (git log, grep, sed, sort, uniq) Modifiez la commande précédente pour
   obtenir la liste sans prénom et nom en double et sans le préfixe "Author:
   ". Le résultat deviendrait donc (il y en a encore des doublons, puisque
   "Bayle Jonathan" et "baylej" sont sans doute les mêmes personnes, mais
   nous ne traiterons pas ce cas) :

    ```
    Alex Tennant
    Alexandre Blondin Massé
    Bayle Jonathan
    RPG Hacker
    U-hide-hard\hide
    baylej
    pedrohlc
    ```
 
+ Q5. Vous devez créer un script `bash` nommé `creer_depot.sh` qui accepte le nom nouveau 
  projet comme paramètre.  Le même paramètre sera utilisé comme nom de `répertoire` pour héberger
  votre dépôt local.  Le script doit créer le nouveau répertoire  dans votre `$HOME`.
  Le nouveau projet sera créé dans votre gestionnaire de source préféré entre GitLab ou GitHub.
  `
 
### FIN.
---

##### Auteur Guy Francoeur, version A2019
###### basé sur le matériel d'Alexandre Blondin Massé, Professeur
