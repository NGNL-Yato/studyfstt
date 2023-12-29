package Exercice_1;

public class Enseignant extends Personne {
	private String specialite;
	private static int nbEnseignants;
	public Enseignant(String nom,String prenom,String rue, String ville, String specialite) {
		super (nom,prenom,rue,ville);
		this.specialite = specialite;
		nbEnseignants++;
	}
	public String toString() {
		return super.toString()+" et a comme specialite "+specialite +".";
	}
	public void ecrirePersonne() {
        System.out.println("Enseignant : " + this.toString());
	}
	public static int nbEnseignants() {
		return nbEnseignants;
	}
}
