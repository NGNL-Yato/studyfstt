package Exercice_2;

public class Rectangle extends ObjetGraphique {
	private double largeur;
	private double hauteur;
	public Rectangle() {
		
	}
	public Rectangle (int x, int y,double largeur, double hauteur) {
		super(x,y);
		this.largeur = largeur;
		this.hauteur = hauteur;
	}
	public double getHauteur() {
		return hauteur;
	}
	public double getLargeur() {
		return largeur;
	}
    public Rectangle(Rectangle rectangle) {
        super(rectangle);
        this.largeur = rectangle.largeur;
        this.hauteur = rectangle.hauteur;
    }
	public void setObjetGraphique(int x, int y, double largeur, double hauteur) {
		super.setPosition(x, y);
		this.largeur = largeur;
		this.hauteur = hauteur;
	}
	public void setTaille(double largeur, double hauteur) {
		this.largeur = largeur;
		this.hauteur = hauteur;
	}
	public void affiche () {
		super.affiche();
		System.out.println("Hauteur :"+ hauteur + ".\nLargeur :" + largeur + ".");
	}
}
