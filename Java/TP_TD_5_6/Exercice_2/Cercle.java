package Exercice_2;

public class Cercle extends ObjetGraphique{
	private double rayon;
	public Cercle() {
		
	}
	public Cercle(int x, int y, double rayon) {
		super(x,y);
		this.rayon = rayon;
	}
	public Cercle (Cercle cercle) {
		super(cercle);
		this.rayon = cercle.rayon;
	}
	public void setRayon(double rayon) {
		this.rayon = rayon;
	}
	public double getRayon() {
		return this.rayon;
	}
	public void affiche() {
		super.affiche();
		System.out.println("Rayon : "+rayon+".");
	}
}
