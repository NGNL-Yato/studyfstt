void main () {
	List<int> nombres = [1, 2, 3, 4, 5];
	//Utilisation de la methode reduce pour calculer la somme des elements de la liste
	int somme = nombres.reduce ((acc, nombre) => acc + nombre);
	print ("Liste d'origine : $nombres");
	print ("Somme des elements avec reduce : $somme");
} 
