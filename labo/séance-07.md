# Séance 7: Bash

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

## 1 - Script bash

Vous devez faire un script `bash` qui va lire les lignes d'un fichier et lister depuis combien de temps
_les fichiers mentionnés_ n'ont pas été édité.
Vous pouvez prendre votre dépôt `GitHub` ou `GitLab`!

#### fichiers.lst
~~~~
Makefile
tp1.c
~~~~

Les commandes importantes sont : `cd`, `ls`, `for`, `cat`, `date`, `git log -1 --format="%ai" -- $filename`

#### éditer le fichier verifier.sh
~~~~
$ nano verifier.sh
$ #changer le droit avec ?
$ 
~~~~

Lancer le script depuis votre répertoire (dépôt local) afin de vérifier si les fichiers sont présents et le 
nombre de jours depuis la dernière édition.

+ un exemple :
~~~~
$ DEPOT=$HOME/depot/inf3135-e2019-tp1
$ cd $DEPOT
$ ./verifier.sh
~~~~

*Note* Vous aurez aussi compris que le script sera utile pour savoir si tous les fichiers existent dans mon dépôt!

## 2 - Lecture d'une ligne de données : validation, conversion, affichage

Dans cet exercice, vous devez dans un premier temps penser à une stratégie pour lire des lignes (plusieurs caractères)
et vérifier qu'il s'agit bien de nombre.

Vous devez garder seulement les lignes qui sont valides soit l'ensemble des nombres N = { 0, 1, 2, 3, 4 ... n }

Vous devez ajouter 100 au nombre pour ensuite l'afficher dans la sortie standard.

exemple de lignes :
~~~~
120 123456789
a 12
be et
-80 100
0 0
12345 18446744073709551615
~~~~

+ Q1. Quelle est la stratégie ?
+ Q2. Approche pour réaliser le travail ?
+ Q3. Difficultés rencontrées ?

### FIN.
---

##### Auteur Guy Francoeur, version A2019
