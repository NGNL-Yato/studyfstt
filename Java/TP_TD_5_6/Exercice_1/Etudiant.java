package Exercice_1;

public class Etudiant extends Personne{
	private String diplomeEnCours;
	private static int nbEtudiants;
	public Etudiant(String nom, String prenom, String rue,String ville, String diplomeEnCours) {
		super (nom,prenom,rue,ville);
		this.diplomeEnCours = diplomeEnCours;
		nbEtudiants++;
	}
	public String toString() {
		return super.toString() +" et a obtenu le diplome de "+ diplomeEnCours+".";
	}
	public void ecrirePersonne() {
        System.out.println("Etudiant : " + this.toString());
	}
	public static int nbEtudiants() {
		return nbEtudiants;
	}
}
