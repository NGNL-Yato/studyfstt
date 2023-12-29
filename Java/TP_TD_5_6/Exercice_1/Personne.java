package Exercice_1;

abstract class Personne {
	private static int nbPersonnes = 0;
	private String nom;
	private String prenom;
	private String rue;
	private String ville;
	public Personne(String nom, String prenom, String rue, String ville) {
		this.nom = nom;
		this.prenom = prenom;
		this.rue = rue;
		this.ville = ville;
		nbPersonnes ++;
	}
	public String toString() {
		return nom + " " + prenom+ " habite à " + rue + " dans la ville de " + ville+".";
	}
    public abstract void ecrirePersonne();
	public static int nbPersonne() {
		return nbPersonnes;
	}
	public void modifierPersonne(String rue, String ville) {
		this.rue = rue;
		this.ville = ville;
		System.out.println("La nouvelle adresse de "+nom+" "+prenom+" est : "+ ville + " rue de "+ rue);
	}
}
