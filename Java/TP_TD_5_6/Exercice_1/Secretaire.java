package Exercice_1;

public class Secretaire extends Personne{
	private String numeroBureau;
	private static int nbSecretaires;
	public Secretaire(String nom, String prenom, String rue,String ville, String numeroBureau) {
		super (nom,prenom,rue,ville);
		this.numeroBureau = numeroBureau;
		nbSecretaires++;
	}
	public String toString() {
		return super.toString()+",son numéro de bureau est :"+numeroBureau+".";
	}
	public void ecrirePersonne() {
        System.out.println("Secretaire : " + this.toString());
	}
	public static int nbSecretaires() {
		return nbSecretaires;
	}
}
