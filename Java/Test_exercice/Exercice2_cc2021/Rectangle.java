package Exercice2_cc2021;

public class Rectangle extends Graphique {
	private int i,l,s;
	public Rectangle (int x,int y, int i, int L) {
		super(x,y);
		this.i = i;
		this.l = L;		
	}
	public double surface () {
		s=i*l;
		return (s);
	}
	public void identifie () {
		System.out.println ("Je suis un Rectangle ");
		this.surface ();
		System.out.println ("La Surface de ce Rectangle est "+ this.s +"\n");
	}
}
