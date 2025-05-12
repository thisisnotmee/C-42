# Cpp-05 Polymorphisme et exceptions
_______________________________________________________
### Exceptions / Fonctions virutelles / Class Abstraites
______________________________________________


#### Exceptions

**std::exception** =  gestion d'erreurs.
**virtual** = autorise la fonction à voyager entre les classes
**classe interne** = Ne signifie pas héritée, mais une classe dans une classe tout simplement.  

`class Mon_exception : public std::exception{`
`virtual const char what*() const throw()`
`{return "Impossible d'acheter ce bien";}`
`		};`
`};`

________________________________________________________

#### Utilisation de std::exception :
__________________________________________________________
#### TRY, CATCH et THROW.

##### TRY : 

Permet d’exécuter du code "à risque". Si une exception est levée, le programme s'intérompt pour éxecuter le catch.

##### CATCH :

Capture une exception (ici de type std::exception) et permet de la traiter, par exemple en affichant un message.

##### THROW :

Sert à "jeter" une exception, interrompt le flux normal du programme.

`try`
`{`
`	code`
`}`
	
`catch(std::exception &e)`
`{`
`	e.what() = type d'erreur`
`}`



__________________________________________________________

#### Classes Abstraites

_________________________________________________________

#### Explications :

Une classe abstraite, possède une méthode virtuelle pure 
(signifie égal à 0) :

`virtual void	print(std::string to_print) const = 0;`

La méthode pure dit à l'ordinnateur :

> La classe ne peut pas être instanciée / innitialisée sauf dans les classes hérités de celle ci.

Si je veux utiliser ma classe abstraite, je l'instancie depuis une classe fille héritée. Sinon ça ne marchera pas !

Positif :

- Pas de variables
- Pas de données