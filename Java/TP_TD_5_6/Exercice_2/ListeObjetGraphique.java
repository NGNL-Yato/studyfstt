package Exercice_2;

public class ListeObjetGraphique {
	private ObjetGraphique[] liste; // le tableau des objets
	private int taille;// la taille du tableau liste
	private int index;//le nombre des éléments dans le tableau
	public ListeObjetGraphique(int taille) {
		this.taille = taille;
		this.liste = new ObjetGraphique [taille];
		index = 0;
	} //constructeur pour l’initialisation
	public void ajouter(ObjetGraphique f) {
        if (this.index < this.taille) {
            liste[index++] = f;
        } else {
            System.out.println("Full ..");
        }		
	}//fonction permettant d’ajouter un objet au tableau
	public void afficheObjetsGraphique () {
		for (ObjetGraphique list : liste) {
			if (list != null) {
				list.affiche();
			}
		}
	}//fct pour afficher les objets du tableau liste
}
	