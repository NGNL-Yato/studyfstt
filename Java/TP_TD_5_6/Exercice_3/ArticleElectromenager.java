package Exercice_3;

public class ArticleElectromenager extends Article implements Solde,VendablePiece {
	private int stock;
	public ArticleElectromenager (int stock,double prixAchat, double prixVente, String nom, String fournisseur) {
		super (prixAchat,prixVente,nom,fournisseur);
		this.stock = stock;
	}
	public ArticleElectromenager () {}
	public void remplirStock (int produit) {
		if(produit >= 0) {
			this.stock += produit;
		} else {
			System.out.println("Valeur négative");
		}
	}
    public int getRemainingStock() {
        return this.getstock();
    }
	public int getstock () {
		return this.stock;
	}
	public void setstock (int stock) {
		this.stock = stock;
	}
	public String toString () {
		return super.getID()+" - Article Electromenager : \n"+super.getfournisseur()+"\nStock Disponible : "+stock;
	}
	@Override
	public void vendre(int stockvendu) {
		this.stock -= stockvendu;
	}
	@Override
	public void lanceSolde(double promotion) {
		this.SetprixVente(super.getprixVente()-(promotion*(super.getprixVente())));
	}
	@Override
	public void termineSolde(double prixnormal) {
		this.SetprixVente(super.getprixVente()+(prixnormal*(super.getprixVente())));				
	}
	@Override
	public String ProductName () {
		return "[ "+super.getID()+" - "+super.getnom()+" ] ";
	}
}
