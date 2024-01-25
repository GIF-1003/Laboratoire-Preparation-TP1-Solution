# Labo de préparation pour le TP1

## Étapes préliminaires
Ce laboratoire constitue une préparation au travail pratique 1 du cours. Il est divisé en deux parties. La première partie est une démarche d'investigation d'un programme. Vous allez devoir corriger les erreurs présentes dans le code qui vous est fourni. Une fois les erreurs documentées, vous allez devoir soumettre une "Pull request" avec le code corrigé. Par la suite, la deuxième partie constitue en une simulation d'une revue de code.

Suivre les étapes suivantes afin de débuter le laboratoire:

1. Effectuer les deux commandes suivantes: `git config --global user.email "email"`
`git config --global user.name "username"`
Mettre le courriel et le username avec lequel votre compte GitHub est configuré.

2. Cloner le dépot dans la machine virtuelle avec la commande: `git clone <url>`

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/0305be21-562f-4bed-a707-149ac72c4aab)

   Lors du clone, entrer le username GitHub. Pour le mot de passe (password), il ne s'agit pas de votre mot de passe GitHub, mais bien d'un token que vous devez créer à l'aide du tutoriel     présent à cet URL: [Création d’un personal access token (classic)](https://docs.github.com/fr/authentication/keeping-your-account-and-data-secure/managing-your-personal-access-tokens#cr%C3%A9ation-dun-personal-access-token-classic )
   N'oubliez pas de cocher la première option comme ceci :
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/ba752e45-bd89-4817-81b1-285813c009a1)

   Aussi, n'oubliez pas de sauvegarder votre token quelque part puisqu'il vous sera demandé pour certaines commandes git. Entrez ensuite votre token lorsqu'on demande d'entrer le mot de passe :

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/d025daa4-45eb-428c-bd78-37a0002714e8)

3. Effectuer la commande suivante `cd <nom du dossier de projet>`
4. Une fois le dépot cloné, vous devez lancer le script d'installation avec la commande suivante:
   `./install-hook.sh`

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/21f98a64-484c-42ef-919b-20948113a0b4)

5. Ouvrir le projet dans NetBeans avec File>Open Project...:
![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/d278f6af-3c30-4175-8d64-7d01193126bb)

Vous êtes maintenant prêt à débuter le laboratoire.


## Partie 1 (Démarche d'investigation avec issues)
But: Investiguer afin de corriger un programme. Vous devez alors décrire et illustrer toute la démarche que vous aurez adoptée pour atteindre cet objectif, ceci en utilisant les "issues" de GitHub. Il s’agit d’être complet, mais concis. Attention, il s'agit ici de valider une démarche d'investigation. Les justifications par la preuve des outils utilisés pour localiser puis corriger les erreurs sont plus importantes que les corrections du code en tant que tel. Documenter des bugs à l'aide des "issues", faire la correction de chacune des "issues" avant d'ouvrir une pull request lorsque la correction est terminée.

Suivre les étapes suivantes:
1. Aller dans la branche partie-1 avec un git checkout: `git checkout partie-1`
2. Examiner le programme et écrire dans le fichier PROGRAMME.md quel est, à la lueur d’une première observation du code, le problème qu’est censé résoudre le programme.
3. Lancer la compilation du programme principal.
4. Documenter dans des issues tous les problèmes. On peut retrouver tous les types d'erreurs (erreur de syntaxe, mise en garde à corriger, mauvaise pratique, erreur d’édition de lien, erreur de logique (erreur à l’exécution) )
Les issues doivent être bien documentées pour chaque erreur identifiée, afin de justifier par des preuves comment vous l’avez localisée (copies d’écran, commentaires d’explication des messages d’erreur, etc.). Voir les exemples d'issues documentées fournies. On demande une issue par bug trouvé.
Dans la section "Issues", cliquer sur "New issue":

![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/9760dbcd-33e2-4229-9b88-f19938c65af2)

Ajouter un titre et une description. Vous devez suivre la structure Localisation-Problème-Solution comme démontré dans le laboratoire. Cliquer sur "Submit new issue".

![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/6a58fa6a-8d88-42af-aaf8-ab26d0025040)


6. Corriger chacun des bugs trouvés et effectuer un commit et un push de la solution. Il est recommandé de faire des commits et pushs régulièrement afin de sauvegarder son travail.
7. À la toute fin, ne pas oublier de faire un dernier commit et push du code final corrigé sur la branche partie-1.
8. Faire la création d'une "Pull request" avec tous les changements vers la branche main avec une description qui montre clairement que toutes les corrections fonctionnent. On veut voir une capture d'écran de la compilation une fois les erreurs corrigées ainsi qu'une deuxième copie d'écran montrant le résultat de l'exécution du programme.

## Partie 2 (Revue de code d'une pull request)
But: Faire la revue de code d'une "Pull request". 

Suivre les étapes suivantes:

1. Aller dans la branche partie-2 avec un git checkout: `git checkout partie-2`. Une demande d'authentification est alors demandée comme ceci:
   
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/24cb902a-2437-41c2-97e7-032915f42d65)
   
   Vous devez exécuter le lien dans un navigateur web, entrer le code et cliquer sur "Continue":
   
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/8907f3f7-a903-4541-a548-fd1b3c91c958)
   
   Cliquer sur "Authorize GitHub":
   
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/f9a1c1d4-9eac-47e8-9649-a67c199eeedb)
   
   Un message de succès va apparaitre:
   
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/14c2b0e9-10d9-43f8-820d-424f6a0d403a)

   Dans le terminal, un lien vers la "Pull request" est fourni:

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/8ae9f951-29c9-4cb1-b1e7-577f11eb276c)

2. Dans la section "Pull requests" sur GitHub, la "PR" Partie-2 - Revue de code est maintenant présente:
   
   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/92ae29ad-295c-4afc-b7a3-7b99c392c082)

3. Se diriger vers la sous-section Files changed. Trouver les erreurs présentes dans la PR et donner une suggestion de modification sous forme de commentaire directement dans la PR. Exécuter le code directement dans NetBeans afin de trouver les erreurs dans le code. 

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/ba8176ae-6ddb-4653-8f0c-8b732299c79d)

4. Une fois les commentaires ajoutés à la "Pull request", cliquer sur "Review changes", puis sur "Submit review":

   ![image](https://github.com/GIF-1003/Labo-Preparation-TP1/assets/57879032/df42f254-0491-4ded-bf4e-b86071c9198d)
