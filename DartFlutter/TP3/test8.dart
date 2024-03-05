void main () {
	//Creation d'un objet de la classe Classe4
	Classe4 abc  = new Classe4 ();
	//Appel des methodes apres Implementation
	abc.afficher1 ();
	abc.afficher2 ();
	abc.afficher3 ();
}
//Class Classe1 (interface1)
class Classe1 {
	void afficher1 () {
		print ("Bonjour Classe1");
	}
}
//Class Classe2 (interface2)
class Classe2 {
	void afficher2 () {
		print ("Bonjour Classe2");
	}
}
//Class Classe3 (interface3)
class Classe3 {
	void afficher3 () {
		print ("Bonjour Classe3");
	}
}
//Classe4 qui implemente Classe1,Classe2,Classe3.
class Classe4 implements Classe1,Classe2,Classe3 {
	void afficher1 () {
		print ("Salut.. c'est Classe1");
	}
	void afficher2 () {
		print ("Salut.. c'est Classe2" );
	}
	void afficher3 () {
		print ("Salut.. c'est Classe3");
	}
}
