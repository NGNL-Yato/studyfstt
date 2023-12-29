package Exercice_2;
import java.util.ArrayList;
import java.util.ListIterator;

public class TestClass {
	public static void main (String [] Args) {
		ObjetGraphique [] Item = new ObjetGraphique [3];
		Item [0] = new Rectangle (1,1,3,4);
		Item [1] = new Cercle (3,1,4.31);
		Item [2] = new Bouton (12,3,4.21,5.11,"Bouton");
		for (ObjetGraphique Object : Item) {
			if(Item != null) {
				Object.affiche();
			}
		}
		ListeObjetGraphique Objet = new ListeObjetGraphique(3);
		Objet.ajouter(new Rectangle (5,2,7,9));
		Objet.ajouter(new Cercle (6,10,7.21));
		Objet.ajouter(new Bouton (7,4,21,32.41,"Bouton 2"));
		Objet.afficheObjetsGraphique();
		
		ArrayList<ObjetGraphique> Objects = new ArrayList<>();
		Objects.add(new Cercle(4,13,32.05));
		Objects.add(new Rectangle(3,42,11,34.21));
		Objects.add(new Bouton (2,4,12,43.21,"Bouton 3"));
		ListIterator<ObjetGraphique> It = Objects.listIterator();
		while (It.hasNext()) {
			It.next().affiche();
		}
	}
}
