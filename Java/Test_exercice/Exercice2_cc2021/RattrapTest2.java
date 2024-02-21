package Exercice2_cc2021;

public class RattrapTest2 {
	public static void main (String []args) {
		Graphique [] tab = new Graphique  [8];
		tab [0] = new Graphique (1,2);
		tab [1] = new Cercle (3,4,10);
		tab [2] = new Rectangle (6,7,8,9);
		tab [3] = new Graphique (10,11);
		tab [4] = new Cercle (12,13,10);
		tab [5] = new Rectangle (14,15,20,30);
		tab [6] = new Graphique (16,17);
		tab [7] = new Cercle (5,105,100);
		for (int i = 0;i <= 6;i++ ) {
			tab [i].affiche();
		}
	}
}
