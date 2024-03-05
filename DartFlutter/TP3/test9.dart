class Voiture <T> {
	T composant;
	Voiture (this.composant);
	void afficher () {
		print ("Information sur la voiture : $composant");
	}
}
void main () {
	//Exemple d'utilisation avec le type String
	 Voiture<String> VoitureString = Voiture<String>('La marque Audi');
	VoitureString.afficher ();
	//Exemple d'utilisation avec un type numerique
	Voiture<int> Voitureint = Voiture <int>(2018);
	Voitureint.afficher ();
}
