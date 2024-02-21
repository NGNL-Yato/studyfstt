package Exercice2_cc2021;

public class RattrapTest1 {
	public static void main (String []args) {
		Graphique g = new Graphique (10,20);
		g.identifie();
		g = new Cercle (3,4,10);
		g.identifie();
		g = new Rectangle (5,6,15,2);
		g.identifie ();
	}
}
