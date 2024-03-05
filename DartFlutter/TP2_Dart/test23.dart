class classe1 {
	void afficher () {
		print ("c'est la classe : classe 1.");
	}
}
class classe2 extends classe1 {
	//surcharge
	void afficher () {
		print ("c'est la classe : classe 2 enfant de la classe 1.");
	}
}
void main () {
	classe1  ab1 = new classe1();
	classe2 ab2 = new classe2();
	ab1.afficher ();
	ab2.afficher ();
}
