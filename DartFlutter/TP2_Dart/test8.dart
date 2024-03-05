String fct4( String nom, {String prenom = ""}) {
	if (prenom.isEmpty) {
		return "Hello $nom";
	}
	return "Hello $nom $prenom";
}
void main () {
	print (fct4("nom1",prenom:"prenom1"));
}
