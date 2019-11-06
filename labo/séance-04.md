# Séance 4: Arguments, Chaînes de caractères et pointeurs

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

## 0 - Makefile

Pour tous les exercices qui suivent, vous devez ajouter au fichier `Makefile` ce qui est nécessaire pour automatiser
la production de vos exécutables (et/ou objets).  De plus, il est souhaitable de produire une cible de test pour chacun.

Si vous cherchez des noms pour vos `exécutables` et `cibles` labo_05_1, labo_05_2, ... etc. Il s'agit, 
de mot labo suivi du numéro de la séance, et, terminant par le numéro de l'exercice.

Il est fort possible que je visite votre dépôt pour vérifier vos avancements.

À ceci, vous allez ajouter deux cibles :
+ all_labo_test :
+ all_labo_build :

Vous avez aussi compris que `all_labo_test` est dépendant de `all_labo_build`.

## 1 - Arguments de la fonction main

Écrivez un petit programme C nomme `cmdline.c` qui accepte un nombre limité et
spécifique en provenance de la ligne de commande.

Vous devez pour faire le traitement des arguments écrire une fonction `int cmdline()`
qui accepte `-c CODE` obligatoire, et les suivants facultatifs `-1 int`,  `-2 int`, 
`-d INC | DEC`. `-d` `-1` et `-2` devront être validé et si une erreur est détectée, 
l'application doit arrêter avec code de retour.

#### code de retour
+ `0` : exécution avec succès;
+ `1` : si -c et/ou le code ne sont pas présents;
+ `2` : si le `-1` et `-2` ne sont pas de type entier naturel N*;
+ `3` : si `-d` et/ou `DEC | INC` ne sont pas présent; 

#### Questions
+ Q1. Quelle instruction vous permet de retourner le code 0?
+ Q2. Quelle instruction vous permet de retourner le code 1?

## 2 - Chaînes de caractères

Écrivez un petit programme C appelé `renverse.c` qui prend tous les arguments
passés en paramètres, les concatène en ordre inverse et affiche le résultat.

On s'attend donc au comportement suivant :

```sh
./renverse alpha beta gamma delta
deltagammabetaalpha

./renverse esope reste et se repose
reposeseetresteesope
```

N'hésitez pas à utiliser la bibliothèque `string.h`.

## 3 - Palindromes

Écrivez une fonction C dont la signature est
```c
bool estPalindrome(const char *s);
```
qui retourne `true` si et seulement si `s` est un palindrome, c'est-à-dire un
mot qui se lit de la même façon de gauche à droite. On s'attend donc à ce que
```c
estPalindrome("radar")
estPalindrome("ici")
estPalindrome("laval")
estPalindrome("!RessasseR!")
estPalindrome("")
estPalindrome("U")
```
retournent `true`, mais que
```c
estPalindrome("Lui")
estPalindrome("Ici")
estPalindrome("laval.")
estPalindrome("Esope reste et se repose.")
```
retournent `false`.

Ensuite, écrivez une fonction C dont la signature est
```c
bool estPhrasePalindrome(const char *s);
```
qui vérifie si une phrase est palindromique, en ignorant la casse
(majuscules/minuscules) et les signes de ponctuation. Ainsi, on s'attend à ce
que
```c
estPhrasePalindrome("Esope reste et se repose.")
estPalindrome("Ici")
```
retournent `true`.

Dans les deux cas, fournissez des tests pour montrer que vos fonctions sont
correctement implémentées.

## 4 - Extra

+ Q1. Vous devez refaire la fonction printf() qui est disponible dans la librairie standard `<stdio.h>`.
Votre nouvelle fonction doit idéalement reproduire le plus fidèlement possible ce que la fonction `printf()`
offre comme fonctionnalités.

+ Q2. Vous devez présenter une version améliorée de la fonction sqrt(n) que vous avez développée lors d'un laboratoire
précédent.  Ceci afin d'impressionner et obtenir une promotion pour un emploi très convoité. Cette version doit être 
fonctionnelle et démontrer une amélioration par rapport à la version dite `naïve`.
Votre programme sera nommé `sqrt.c` et produira l'exécutable `sqrt`. Vous devez traiter les nombres N = Naturels.  Le patron
n'est pas un programmeur.  Vous avez 4 minutes pour le convaincre que vous êtes la personne idéale.  Rappelez-vous les conseils 
de votre enseignant.

### FIN.
---

##### Auteur Guy Francoeur, version A2019
###### basé sur le matériel d'Alexandre Blondin Massé, Professeur
