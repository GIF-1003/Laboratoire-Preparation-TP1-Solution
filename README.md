# Labo de préparation pour le TP1

## Étapes préliminaires
Ce laboratoire constitue une préparation au travail pratique 1 du cours. Il est divisé en deux parties. La première partie est une démarche d'investigation d'un programme. Vous allez devoir corriger les erreurs présentes dans le code qui vous est fourni. Une fois les erreurs documentées, vous allez devoir soumettre une "Pull request" avec le code corrigé. Par la suite, la deuxième partie constitue en une simulation d'une revue de code.

Suivre les étapes suivantes afin de débuter le laboratoire:

1. Effectuer les deux commandes suivantes: `git config --global user.email "email"`
`git config --global user.name "username"`
Mettre le courriel et le username avec lequel votre compte GitHub est configuré.

2. Cloner le dépot dans la machine virtuelle avec la commande: `git clone <url>`

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/009bd18b-07cb-4f47-932b-645b3e22b638)

   Lors du clone, entrer le username GitHub. Pour le mot de passe (password), il ne s'agit pas de votre mot de passe GitHub, mais bien d'un token que vous devez créer à l'aide du tutoriel     présent à cet URL: [Création d’un personal access token (classic)](https://docs.github.com/fr/authentication/keeping-your-account-and-data-secure/managing-your-personal-access-tokens#cr%C3%A9ation-dun-personal-access-token-classic )
   N'oubliez pas de cocher la première option comme ceci :
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/40f2e52c-112a-46f1-95fb-397ca2a93cbc)

   Aussi, n'oubliez pas de sauvegarder votre token quelque part puisqu'il vous sera demandé pour certaines commandes git. Entrez ensuite votre token lorsqu'on demande d'entrer le mot de passe :

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/b0491750-80e3-44e1-89e8-fedf61ccbe0c)

3. Effectuer la commande suivante `cd <nom du dossier de projet>`
4. Une fois le dépot cloné, vous devez lancer le script d'installation avec la commande suivante:
   `./install-hook.sh`
   Le mot de pass de etudiant : 123456

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/5dd6a8dd-d6df-4da7-a9d5-52030f19c923)

6. Ouvrir le projet dans NetBeans avec File>Open Project...:
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/336b62d0-7696-415e-a49c-4f8515a64bf2)


Vous êtes maintenant prêt à débuter le laboratoire.


## Partie 1 (Démarche d'investigation avec issues)
But: Investiguer afin de corriger un programme. Vous devez alors décrire et illustrer toute la démarche que vous aurez adoptée pour atteindre cet objectif, ceci en utilisant les "issues" de GitHub. Il s’agit d’être complet, mais concis. Attention, il s'agit ici de valider une démarche d'investigation. Les justifications par la preuve des outils utilisés pour localiser puis corriger les erreurs sont plus importantes que les corrections du code en tant que tel. Documenter des bugs à l'aide des "issues", faire la correction de chacune des "issues" avant d'ouvrir une pull request lorsque la correction est terminée.

Suivre les étapes suivantes:
1. Aller dans la branche partie-1 avec un git checkout: `git checkout partie-1`
![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/1749c825-3b26-424c-baf1-83d77b854eb3)

2. Examiner le programme et écrire dans le fichier PROGRAMME.md quel est, à la lueur d’une première observation du code, le problème qu’est censé résoudre le programme.
3. Lancer la compilation du programme principal.
4. Documenter dans des issues tous les problèmes. On peut retrouver tous les types d'erreurs (erreur de syntaxe, mise en garde à corriger, mauvaise pratique, erreur d’édition de lien, erreur de logique (erreur à l’exécution) )
Les issues doivent être bien documentées pour chaque erreur identifiée, afin de justifier par des preuves comment vous l’avez localisée (copies d’écran, commentaires d’explication des messages d’erreur, etc.). Voir les exemples d'issues documentées fournies. On demande une issue par bug trouvé.
Dans la section "Issues", cliquer sur "New issue":

![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/1c496d89-4fc5-498d-98e6-01dc33817b4a)

Ajouter un titre et une description. Vous devez suivre la structure Localisation-Problème-Solution comme démontré dans le laboratoire. Cliquer sur "Submit new issue".

![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/6106e60e-78be-47de-a7e6-1e6080c8fb26)

6. Corriger chacun des bugs trouvés et effectuer un commit et un push de la solution. Il est recommandé de faire des commits et pushs régulièrement afin de sauvegarder son travail.
7. À la toute fin, ne pas oublier de faire un dernier commit et push du code final corrigé sur la branche partie-1.
8. Faire la création d'une "Pull request" avec tous les changements vers la branche main avec une description qui montre clairement que toutes les corrections fonctionnent. On veut voir une capture d'écran de la compilation une fois les erreurs corrigées ainsi qu'une deuxième copie d'écran montrant le résultat de l'exécution du programme.

## Partie 2 (Revue de code d'une pull request)
But: Faire la revue de code d'une "Pull request". 

Suivre les étapes suivantes:

1. Aller dans la branche partie-2 avec un git checkout: `git checkout partie-2`. Une demande d'authentification est alors demandée comme ceci:
   
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/c4fe4d50-b8bf-4f20-bfe0-8cadba52553d)
   
   Vous devez exécuter le lien dans un navigateur web, entrer le code et cliquer sur "Continue":
   
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/1b336964-a1dd-495b-942f-3e7ab87944a2)

   Cliquer sur "Authorize GitHub":
   
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/94dd13e6-e78a-4d66-8644-d4f1af5c031e)

   Un message de succès va apparaitre:
   
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/03a7258f-d53e-4299-8fc1-013e40880a96)

   Dans le terminal, un lien vers la "Pull request" est fourni:

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/7e08e532-571a-4a80-b513-9f085cdff7d6)

2. Dans la section "Pull requests" sur GitHub, la "PR" Partie-2 - Revue de code est maintenant présente:
   
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/55eaba2d-17cf-4d12-8709-f6c318a209a1)

3. Se diriger vers la sous-section Files changed. Trouver les erreurs présentes dans la PR et donner une suggestion de modification sous forme de commentaire directement dans la PR. Exécuter le code directement dans NetBeans afin de trouver les erreurs dans le code. 

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/0487c6b8-fbd2-4569-8f86-dd8c9fd128dd)

4. Une fois les commentaires ajoutés à la "Pull request", cliquer sur "Review changes", puis sur "Submit review":

   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/be461782-ed02-4dc5-adea-23f7d142b06b)

