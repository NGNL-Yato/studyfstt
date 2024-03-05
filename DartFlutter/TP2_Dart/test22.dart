class classe1 {
	void afficher () {
		print ("Bonjouer, c'est la fonction d'affichage de la classe parent classe 1.");
	}
}
class classe2 extends classe1{}
class classe3 extends classe1{}
void main () {
	var ab1 = new classe2 ();
	ab1.afficher();
	var ab2 = new classe3 ();
	ab2.afficher();
}
