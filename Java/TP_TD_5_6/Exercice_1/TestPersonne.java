package Exercice_1;
/*	super (nom,prenom,rue,ville);
 *  this.specialite = specialite;
 *  nbEnseignants++;
*/
public class TestPersonne{
	public static void main (String []args) {
	 Enseignant E = new Enseignant("Ahmed", "Sbihi", "Rue Bel Air", "Fès", "Informatique");
	 Etudiant E1 = new Etudiant("Samir", "Merras", "rue saules ", "Oujda", "licence informatique");
	 Etudiant E2 = new Etudiant("Hamid", "Nissani", "rue d’olivier", "Taza", "DUT informatique");
	 Secretaire S = new Secretaire("Said", "Abidi","Rue Elamal", "Casablanca", "A123");
	 S.ecrirePersonne();
	 E.ecrirePersonne();
	 E1.ecrirePersonne();	 
	 E2.ecrirePersonne();
	 E.modifierPersonne("rue du grenadier", "Rabat" );
	 S.modifierPersonne("rue Taounat", "Safi");
	 System.out.println("Le nombre d'etudiant est "+E2.nbEtudiants()+", le nombre de secretaire "+S.nbSecretaires()+", le nombre d'enseignant "+E.nbEnseignants());
	 System.out.println("Le nombre total de personnes est "+S.nbPersonne()+".");
	 Enseignant E_ = new Enseignant("Brahim","Ben","ibiria","Taroudant","Mecanicien");
	 Etudiant E3 = new Etudiant("Jack","Jp","Brahim Roudani","Skhirat","Baccalaureat");
	 Secretaire S2 = new Secretaire("Said", "Abidi","Rue Elamal", "Casablanca", "A123");
	 System.out.println("Le nombre total de personnes est "+S.nbPersonne()+".");
	}
}
