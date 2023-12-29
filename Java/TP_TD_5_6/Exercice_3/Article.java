package Exercice_3;

public class Article {
	private int ID;
    private static int IDCounter = 0;
	private double prixAchat;
	private double prixVente;
	private String nom;
	private String fournisseur;
	public Article () {}
	public Article (double prixAchat, double prixVente, String nom, String fournisseur) {
		this.prixAchat = prixAchat;
		this.prixVente = prixVente;
		this.nom = nom;
		this.fournisseur = fournisseur;
        this.ID = generateID();
	}
	public double rendement () {
		return this.prixAchat - this.prixVente;
	}
    public double calculateProfit() {
        return this.rendement();
    }
	public int getID() {
		return this.ID;
	}
	public String toString () {
		return "Prix Achat : "+prixAchat+", prix vente : "+prixVente+", nom : "+nom+"et le fournisseur : "+fournisseur;
	}
	public void Setnom (String nom) {
		this.nom = nom;
	}
	public void SetprixAchat (double prixAchat) {
		this.prixAchat = prixAchat;
	}
	public void SetprixVente (double prixVente) {
		this.prixVente = prixVente;
	}
	public void Setfournisseur (String fournisseur) {
		this.fournisseur = fournisseur;
	}
	public String getfournisseur () {
		return this.fournisseur ;
	}
	public String getnom () {
		return this.nom;
	}
	public double getprixAchat () {
		return this.prixAchat;
	}
	public double getprixVente () {
		return this.prixVente;
	}

	public String ProductName () {
		return "[ "+ID+" - "+nom+" ] ";
	}
    private synchronized static int generateID() {
        return ++IDCounter;
    }
}
