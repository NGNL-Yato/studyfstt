class Classe1 {
	String abc = "C'est : classe parent";
}
class Classe2 extends Classe1 {
	void afficher () {
		print (super.abc);
	}
}
void main () {
	Classe2 c1 = new Classe2 ();
	c1.afficher ();
}

