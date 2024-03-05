void main () {
	List<int> nombres = [1, 2, 3, 4, 5];
	//Utilisation de la methode map pour doubler la valeur de chaque element de la liste
	List<int> resultats = nombres.map ((nombres) => nombres*2).toList ();
	print ("Liste d'origine : $nombres");
	print ("Liste apres la transformation avec map : $resultats");
} 
