package Exercice_2;
import java.util.Date;
import java.util.Scanner;

/*
 * 1. Définir une classe Employé caractérisée par les attributs : Matricule, Nom, Prénom, AnneeNaissance,
AnneeEmbauche, Salaire ?
2. Définir les méthodes d’accès aux différents attributs de la classe (getters et setters)?
3. Définir un constructeur surchargé permettant d’initialiser les attributs par des valeurs saisies par
l’utilisateur ?
4. Ajouter à la classe la méthode getAnciennete( ) qui retourne le nombre d’années d’ancienneté de
l’employé ?
5. Ajouter à la classe la méthode getAge( ) qui retourne l’âge de l’employé ?
6. Ajouter à la classe la méthode AugmentationDuSalaire( ) qui augmente le salaire de l’employé en
prenant en considération l’ancienneté :
- Si Ancienneté < 5 ans, alors on ajoute 2%.
- Si Ancienneté < 10 ans, alors on ajoute 5%.
- Sinon (c’est-à-dire : Ancienneté >= 10 ans), on ajoute 10%.
7. Ajouter la méthode AfficherEmployé() qui affiche les informations de l’employé ?
8. Ecrire un programme de test pour la classe Employé ?
 */
public class Employe {
	private String Matricule;
	private String Nom;
	private String Prenom;
	private int AnneeNaissance;
	private int AnneeEmbauche;
	private double Salaire;
	public Employe (String Mat,String FName,String SName,int date1,int date2,double salary) {
		this.Matricule = Mat;
		this.Nom = FName;
		this.Prenom = SName;
		this.AnneeNaissance = date1;
		this.AnneeEmbauche = date2;
		this.Salaire = salary;
	};
	public String getMatricule () {
		return this.Matricule;
	}
	public String getNom () {
		return this.Nom;
	}
	public String getPrenom () {
		return this.Prenom;
	}
	public int getAnneeNaissance () {
		return this.AnneeNaissance;
	}
	public int getAnneeEmbauche () {
		return this.AnneeEmbauche;
	}
	public double getSalaire () {
		return this.Salaire;
	}
	public void setMatricule(String Mat) {
		this.Matricule = Mat;
	}
	public void setNom(String Name) {
		this.Nom = Name;
	}
	public void setPrenom(String Sname) {
		this.Prenom = Sname;
	}
	public void setAnneeNaissance(int Date) {
		this.AnneeNaissance = Date;
	}
	public void setAnneeEmbauche(int Date) {
		this.AnneeEmbauche = Date;
	}
	public void setSalaire(double salary) {
		this.Salaire = salary;
	}
	public Employe () {
		Scanner sc = new Scanner(System.in);
		System.out.println("Donnez le nom de l'employe");
		this.Nom = sc.next();
		System.out.println("Donnez le prenom de l'employe");
		this.Prenom = sc.next();
		System.out.println("Donnez la Matricule de l'employe");
		this.Matricule = sc.next();
		System.out.println("Donnez l'annee de naissance de l'employe");
		this.AnneeNaissance = sc.nextInt();
		System.out.println("Donnez l'annee d'embauche de l'employe");
		this.AnneeEmbauche = sc.nextInt();
		System.out.println("Donnez le salaire de l'employe");
		this.Salaire = sc.nextDouble();
		sc.close();
	}
	public int getAnciennete(int CurrentYear) {
		return CurrentYear - this.AnneeEmbauche;
	}
	public int getAge(int CurrentYear) {
		return CurrentYear - this.AnneeNaissance;
	}
	public void AugmentationDuSalaire(int working_years) {
	    /*- Si Ancienneté < 5 ans, alors on ajoute 2%.
	    - Si Ancienneté < 10 ans, alors on ajoute 5%.
	    - Sinon (c’est-à-dire : Ancienneté >= 10 ans), on ajoute 10%.
	    */
	    System.out.println("----------------------------");
	    System.out.println("Vu que " + this.Nom + " " + this.Prenom + " a travaille pendant " + working_years + " annees..");
	    if (working_years <= 1) {
	        System.out.println("Encore trop tot pour obtenir une augmentation ...");
	    } else if ((working_years > 1) && (working_years < 5)) {
	        this.Salaire += this.Salaire * 0.02;
	    } else if ((working_years >= 5) && (working_years < 10)) {
	        this.Salaire += this.Salaire * 0.05;
	    } else {
	        this.Salaire += this.Salaire * 0.10;
	    }
	    if (working_years > 1) {
	        System.out.println("Son nouveau Salaire sera : " + this.Salaire);
	    }
	}

	public void Afficher_Employe(int Date) {
		System.out.println(this.Nom+" "+this.Prenom+" identifié par "+ this.Matricule+" est age de "+ this.getAge(Date)+" annee et est paye "+this.Salaire);
	}
	public static void main (String []args) {
		Employe First_Employe = new Employe ("UE313245","Ahmed","C",1976,2010,23173.32);		
		Employe Second_Employe = new Employe ();
		Date d=new Date();  
	    int year= d.getYear()+1900;//Ancienne méthode,on doit rajouter 1900 pour arriver à notre année
		First_Employe.Afficher_Employe(year);
		Second_Employe.Afficher_Employe(year);
        System.out.println("On est en : "+year+ " ,le salaire des employes va changer ..\n");  
        First_Employe.AugmentationDuSalaire(First_Employe.getAnciennete(year));
        Second_Employe.AugmentationDuSalaire(Second_Employe.getAnciennete(year));
        
	}
}
