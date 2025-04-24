# C++ Exercice 05

#### _______________________________________________________________

### Exceptions / Fonctions virutelles / Class Abstraites

#### _______________________________________________________________


#### 1. Exceptions

 std::exception est une classe utilisé pour la gestion d'erreurs

#### Création d'exception :

`class Humain { `
`class Mon_exception : public std::exception{`
`virtual const char what*() const throw()`
`{return "Impossible d'acheter ce bien";}`
`};`
`};`

En gros, quand vous créez une exception il faut faire hérité la classe en question de la classe std::exception.

Virtual assure l'héritage de la fonction entres classes.

Info : Une classe imbriquée dans une autre n'est pas une classe héritée !!!
C'est une classe Interne.

Humain appartient à planète par exemple.

#### _______________________________________________________________

#### Utilisation de std::exception :

#### _______________________________________________________________

`try {`
`Humain.buy_this(100);`
`if (Humain.havent_buy())`
`throw Humain::exception();`
`}`
	
`catch(std::exception &e)`
`{`
`std::cout << e.what() << std::endl;`
`}`

Dans le code si dessus, afin que la gestion d'errreurs se fasse correctement, ont utilise :
##### TRY, CATCH et THROW.

#### TRY : 

Permet d’exécuter du code "à risque". Si une exception est levée dans ce bloc, on saute directement au catch.

#### CATCH :

Capture une exception (ici de type std::exception) et permet de la traiter, par exemple en affichant un message.

#### THROW :

Sert à "jeter" une exception, interrompant le flux normal du programme.

#### _______________________________________________________________

#### Classes Abstraites

#### _______________________________________________________________

#### Explications :

Une classe abstraite, as obligatoirement une méthode virtuelle pure (une fonction membre qui est égal à 0) :

`virtual void	print(std::string to_print) const = 0;`

La méthode pure dit à l'ordinnateur :

> La classe ne peut pas être instanciée / innitialisée sauf dans les classes hérités de celle ci.

Si je veux utiliser ma classe abstraite, je l'instancie depuis une classe fille héritée. Sinon ça ne marchera pas !

Si ceci est en partie clair pour vous. Vous me demanderiez sans doute quel est l'interêt d'utiliser de telles classes dans un programme informatique ?

Je me suis posé cette question, et je vais donc vous montrer les points positifs à cela :

- Pas de variables
- Pas de données

Quelques exemples de projets à classes abstraites :

- Système de formulaires (avec un formulaire abstrait à la base)
- Jeu RPG (Une classe abstraite *personnage*, juste les spells qui changent)
- Transport Véhicule Gestion (Classe Standart puis les voitures, camions...)
- Système D'Intélligence Artificielle (Parents cerveau, Fille AggressiveHead, DefenseHead...)
- Simulateur Scientifique
- ect ect ...




