package Exercice_4;

public class Rectangle extends Figure {
    private int longueur;
    private int largeur;

    public Rectangle(int abscisse, int ordonnee, int couleur, int longueur, int largeur) {
        super(abscisse, ordonnee, couleur);
        this.longueur = longueur;
        this.largeur = largeur;
    }
}