void main () {
	Classe2 aa = new Classe2 (); 
	aa.printdata ();
}
//Class Classe1 (Interface)
class Classe1 {
	void printdata () {
		print ("Bonjour c'est Classe1");
	}
}
//classe: Classe 2 qui implemente Classe1
class Classe2 implements Classe1 {
	void printdata () {
		print ("Bonjour c'est classe2");
	}
}
