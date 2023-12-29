package Exercice_2;

public abstract class ObjetGraphique {
	private int x;
	private int y;
	public ObjetGraphique(int x, int y) {
		this.x = x;
		this.y = y;
	}
	public ObjetGraphique() {
	}
    public ObjetGraphique(ObjetGraphique objetGraphique) {
        this.x = objetGraphique.x;
        this.y = objetGraphique.y;
    }
	public int getX() {
		return this.x;
	}
	public int getY() {
		return this.y;
	}
	public void setPosition(int x, int y) {
        this.x = x;
        this.y = y;
	}
	public void affiche () {
		System.out.println("*************************************************");
		System.out.println("X :"+ x + ".\nY :" + y + ".");
	}
	
}
