class classe1 {
	void afficher1() {
		print ("Bonjour, c'est la fonction d'affichage de la classe 1.");
	}
}
class classe2 extends classe1 {
	void afficher2() {
		print ("Bonjour, c'est la fonction d'affichage de la classe 2.");
	}
}
class classe3 extends classe2 {}
void main () {
	var ab1 = new classe3 ();
	ab1.afficher1();
	ab1.afficher2();
}
