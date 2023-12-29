package Exercice_2;

public class Bouton extends Rectangle {
	private String text;
	public Bouton() {
		
	}
	public Bouton(int x, int y, double largeur, double hauteur, String text) {
		super(x,y,largeur,hauteur);
		this.text = text;
	}
    public Bouton(Bouton bouton) {
        super(bouton);
        this.text = bouton.text;
    }
	public void setText(String text) {
		this.text = text;
	}
	public String getText() {
		return text;
	}
	public void affiche () {
		super.affiche();
		System.out.println("Text : "+text);
	}
}
