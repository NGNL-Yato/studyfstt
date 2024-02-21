package Exercice2_cc2021;
public class Graphique {
	private int x,y;
	public Graphique (int x,int y) {
		this.x = x;
		this.y = y;
	}
	public void identifie () {
		System.out.println("Je suis une forme géométrique \n");
	}
	public void affiche () {
		this.identifie ();
		System.out.println("Le centre de l'objet se trouve dans : "+ x + " et "+ y + "\n");
	}
	public double surface () {
		return (0);
	}
}