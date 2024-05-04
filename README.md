# <p align="center">libft</p>
> *Ce projet vise à vous faire coder en C une bibliothèque de fonctions courantes que vous pourrez utiliser pour vos futurs projets.*
>
> *La programmation en C peut être laborieuse sans accès aux fonctions courantes, donc prenons le temps de réécrire, comprendre et utiliser ces fonctions dans ce projet, afin de pouvoir efficacement les réutiliser dans nos projets futurs en C.*
>
> *Enrichissez votre libft progressivement tout au long de l'année, mais assurez-vous toujours de vérifier les fonctions autorisées pour chaque projet à venir !*

## Checklist
- [x] **`atoi`** Convertir une chaîne en entier
- [x] **`bzero`** Écrire des octets de valeur zéro dans un bloc d'octets
- [x] **`calloc`** Allocation et libération dynamiques de mémoire
- [x] **`isalnum`** Vérifier si un caractère est alphanumérique
- [x] **`isalpha`** Vérifier si un caractère est alphabétique
- [x] **`isascii`** Vérifier si un caractère est un code ASCII
- [x] **`isdigit`** Vérifier si un caractère est un chiffre
- [x] **`isprint`** Vérifier si un caractère est imprimable
- [x] **`itoa`** Convertir un entier en chaîne
- [x] **`lstadd_back`** Ajouter un nouvel élément à la fin d'une liste
- [x] **`lstadd_front`** Ajouter un nouvel élément au début d'une liste
- [x] **`lstclear`** Supprimer et libérer la mémoire de tous les éléments d'une liste
- [x] **`lstdelone`** Supprimer et libérer la mémoire d'un élément d'une liste
- [x] **`lstiter`** Appliquer une fonction à chaque élément d'une liste
- [x] **`lstlast`** Renvoie le dernier élément d'une liste
- [x] **`lstmap`** Appliquer une fonction à chaque élément d'une liste pour créer une nouvelle liste
- [x] **`lstnew`** Créer un nouvel élément de liste
- [x] **`lstsize`** Compter le nombre d'éléments d'une liste
- [x] **`memccpy`** Copier une chaîne jusqu'à un caractère spécifié
- [x] **`memchr`** Rechercher un caractère dans un bloc de mémoire
- [x] **`memcmp`** Comparer deux blocs de mémoire
- [x] **`memcpy`** Copier des octets d'une zone mémoire à une autre
- [x] **`memmove`** Copier des octets d'une zone mémoire à une autre
- [x] **`memset`** Remplir une zone mémoire avec une valeur spécifique
- [x] **`putchar_fd`** Écrire un caractère sur un descripteur de fichier
- [x] **`putendl_fd`** Écrire une chaîne suivie d'un caractère de fin de ligne sur un descripteur de fichier
- [x] **`putnbr_fd`** Écrire un nombre sur un descripteur de fichier
- [x] **`putstr_fd`** Écrire une chaîne sur un descripteur de fichier
- [x] **`split`** Diviser une chaîne en mots
- [x] **`strchr`** Rechercher un caractère dans une chaîne
- [x] **`strdup`** Dupliquer une chaîne
- [x] **`strjoin`** Joindre deux chaînes
- [x] **`strlcat`** Concaténer des chaînes avec une taille limitée
- [x] **`strlcpy`** Copier des chaînes avec une taille limitée
- [x] **`strlen`** Calculer la longueur d'une chaîne
- [x] **`strmapi`** Appliquer une fonction à chaque caractère d'une chaîne
- [x] **`strncmp`** Comparer deux chaînes
- [x] **`strnstr`** Localiser une sous-chaîne dans une chaîne
- [x] **`strrchr`** Rechercher un caractère dans une chaîne
- [x] **`strtrim`** Supprimer les espaces au début et à la fin d'une chaîne
- [x] **`substr`** Extraire une partie d'une chaîne
- [x] **`tolower`** Convertir un caractère en minuscule
- [x] **`toupper`** Convertir un caractère en majuscule

## Install
```bash
sudo apt update -y
sudo apt install -y ar
sudo apt install -y make
```
```bash
mkdir -p $HOME/.local/lib
mkdir -p $HOME/.local/src
mkdir -p $HOME/.local/include
```
```bash
name=libft

git clone https://github.com/Skalyaeve/$name.git
cd $name && make && make clean

ln -s $PWD/$name.a $HOME/.local/lib/$name.a
ln -s $PWD/src $HOME/.local/src/$name
ln -s $PWD/include $HOME/.local/include/$name
```

## Usage
- `gcc` flags:
```bash
-L $HOME/.local/lib -lft
```

## Uninstall
```bash
name=libft

rm -rf $name
rm $HOME/.local/lib/$name.a
rm $HOME/.local/src/$name
rm $HOME/.local/include/$name
```
