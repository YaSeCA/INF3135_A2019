# Séance 8+: Bibliothèques, CUnit (TDD en C)

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

## 0 - Préparation pour l'examen final

Nous avons vu beaucoup de choses cette session.  Maintenant il est important de tester ce que nous savons.
Vous allez dans les exercices suivants expérimenter la construction de librairie, `fichiers entêtes (.h) et sources (.c)`.
Vous allez aussi avec CUnit, un `framework` de développement Agile `test driven développement - TDD`, créer des scénarios 
pour tester vos fonctions. En plus de tout cela, vous allez expérimenter et développer des fonctions dites naïves et tenter
de les rendre légèrement plus performantes.

Ce laboratoire est d'une durée supérieure à 2h.  Vous devez réaliser les exercices sur plusieurs séances.  Le moniteur peut
vous guider dans la réalisation, mais il est important de savoir que vous serez livré à vous même lors des examens ou le 
reste de votre parcours scolaire et professionnel.  Prendre de bonne habitude est important.

## 1 - Developpement rapide

 a) Vous devez écrire un programme et une fonction qui permet de découvrir des nombres premiers.
 b) Vous devez écrire une fonction simple qui trouve un nombre parfait dans un intervalle.
 
Étapes :
 - Prendre quelques minutes pour y penser;
 - Écrire une stratégie sur papier;
 - Écrire vos fonctions;
 - Ne tentez pas de les optimiser, il est grandement improbable d'y arriver du premier coup;

## 2 - Complexité asymptotique

Si c'est la première fois que vous voyez ce terme, alors voici une courte explication.  La complexité asymptotique vise 
à connaître le coût qu'un algorithme prend pour des cas typiques.  Pire cas, meilleur cas, cas moyen.  On peut aussi le
nommer Grand O et utiliser la notation associée ie **O(n)** O(log n). NOTE: un cours existe à UQAM pour approfondir le 
savoir de cette matière.

Exemple afficher tous les nombres entre `1` et le nombre `n` aura un coût (ou Grand O) de O(n) puisse que
nous devons passer sur chaque nombre pour faire le `printf`. La boucle sera de n `loops`.

Une fois terminé le numéro précédent, vous devez calculer le coût (la complexité) 
 + Q1 pour un nombre premier;
 + Q2 pour un nombre qui n'est pas premier. 

Pour chacune des fonctions :
 + Q1. Est-ce que la fonction que vous avez écrite est dite naïve ou optimisée ?
 + Q2. Comment est-ce possible de rendre ceci plus rapide ?
 + Q3. Écrire du code additionnel ralentira ou accélérera votre la découverte ?
 
## 3 - Construction de librairies

Dans `mes_outils.h` et `mes_outils.c` construire et coder les fonctions :
Vous devez coder les fonctions atoi() ou atol() et isdigits() identiques à ce qui est disponible dans le C standard.
 + La fonction devra être en mesure de traiter n'importe quel nombre positif.
 + Ensemble N = {0 .. 2<sup>64</sup>} tel que `0123`, `9028282893`
 - Idealement si vous êtes en mesure de gérer les nombres négatifs vous êtes encore meilleur

Si vous avez de l'ambition et du temps, faire aussi une fonction asciiOf() : qui retourne le code ascii d'un caractère passé comme argument.

En plus, vous pouvez aussi prendre les fonctions du #1 et les integrer au fichier `mes_outils.h` et `mes_outils.c`

## 4 - Créer un programme de test unitaire avec CUnit 

 + `CUnit` est disponible et déjà installé dans le serveur Java de l'UQAM;
 + Le programme sera en mesure de tester les fonctions qui composent vos travaux;
 + Vous devez créer un programme et inclure les fichiers d'entêtes pour que les fonctions soient vues et testées;

Vous devez tester les fonctions que vous avez codées dans les exercices précédents.

## 5 - Unit-tester mes fonctions durant le développement (Agile)

Refaire (refactoriser ou optimiser) toutes les fonctions du numéro 1 afin de les rendre plus performantes.
Durant le développement, il est possible de re-tester (test de régression) vos fonctions afin de savoir si elles sont toujours conformes.

+ Q1. Plus performante veut dire quoi ?
+ Q2. Comment est-ce possible de rendre un programme plus performant ?
+ Q3. Est-ce possible de rendre un programme plus performant en ajoutant du code ?
+ Q4. Comment est-ce possible de savoir si les fonctions retournent toujours un résultat correct ?
+ Q5. Quelle autre façon de faire pourrait aussi nous dire si les fonctions retournent un résultat correct ?

### FIN.
---

##### Auteur Guy Francoeur, version A2019
