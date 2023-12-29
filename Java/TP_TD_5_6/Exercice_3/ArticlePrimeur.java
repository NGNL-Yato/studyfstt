package Exercice_3;

public class ArticlePrimeur extends Article implements Solde,VendablePiece {
	private int stock;
	public ArticlePrimeur (int stock,double prixAchat, double prixVente, String nom, String fournisseur) {
		super (prixAchat,prixVente,nom,fournisseur);
		this.stock = stock;
	}
	public ArticlePrimeur () {
		
	}
	public void remplirStock (int produit) {
		if(produit >= 0) {
			this.stock += produit;
		} else {
			System.out.println("Valeur négative");
		}
	}
	public String toString () {
		return super.getID()+" - Article Primeur : \n"+super.getfournisseur()+"\nStock Disponible : "+stock;
	}
	@Override
	public void vendre(int stockvendu) {
		this.stock -= stockvendu;
	}
	@Override
	public void lanceSolde(double promotion) {
		this.SetprixVente(promotion-(promotion*(super.getprixVente())));
	}
	@Override
	public void termineSolde(double prixnormal) {
		this.SetprixVente(prixnormal+(prixnormal*(super.getprixVente())));		
	}
    public int getRemainingStock() {
        return this.getstock();
    }
	public int getstock () {
		return this.stock;
	}
	@Override
	public String ProductName () {
		return "[ "+super.getID()+" - "+super.getnom()+" ] ";
	}
}
