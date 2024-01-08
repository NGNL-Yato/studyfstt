package Exercice2_cc2021;

public class Cercle extends Graphique {
	private double r,s;
	public Cercle (int x,int y, double r) {
		super (x,y);
		this.r = r;
	}
	public void identifie () {
		System.out.println("Je suis un Cercle ");
		this.surface();
		System.out.println("La Surface de ce Cercle est "+ this.s +"\n");
	}
	public double surface() {
		s = 3.14*r*r;
		return(s);
	}
}
