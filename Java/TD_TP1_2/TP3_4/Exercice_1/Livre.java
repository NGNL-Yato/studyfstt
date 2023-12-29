package Exercice_1;
import java.util.Scanner;
/*
1. Définir une classe Livre avec les attributs suivants : Titre, Auteur (Nom complet), Prix ?
2. Définir les méthodes d’accès aux différents attributs de la classe (getters et setters) ?
3. Définir un constructeur surchargé permettant d’initialiser les attributs par des valeurs saisies par
l’utilisateur ?
4. Définir la méthode Afficher() permettant d’afficher les informations du livre en cours ?
5. Écrire un programme testant la classe Livre ?
java

 * 
 */
public class Livre {
	private String Titre;
	private String Auteur;
	public double Prix;
	
	public Livre (String title_,String Author,double price) {
		Titre = title_;
		Auteur = Author;
		Prix = price;
	}
	public Livre () {
		Scanner sc = new Scanner(System.in);
		System.out.println("Donnez le Titre de votre Livre");
		Titre = sc.next();
		System.out.println("Donnez le nom de l'Auteur de votre Livre");
		Auteur = sc.next();
		System.out.println("Donnez le prix de votre Livre");
		Prix = sc.nextDouble();
		sc.close();
	}
	public String getTitre () {
		return Titre;
	}
	public void setTitre (String Title) {
		this.Titre = Title;
	}
	public void setAuteur (String Auteur_) {
		this.Auteur = Auteur_;
	}
	public String getAuteur () {
	return Auteur;
	}
	public double getPrix () {
		return Prix;
	}
	public void setPrix (double price) {
		this.Prix = price;
	}
	public void Afficher () {
		System.out.println("Titre de votre livre : "+this.Titre+"\nAuteur du livre : "+this.Auteur+"\nPrix du Livre :"+ this.Prix);
	}
	public void ChangerInformations () {
		System.out.println("Que voulez-vous changer?\n1-Nom auteur..\n2-Titre du livre.. \n3-Prix du livre..");
		Scanner sc = new Scanner(System.in);
		int Choice = 0;
		while (Choice != -1) {
			Choice = sc.nextInt();
			switch (Choice){
				case 1 : System.out.println("Donnez un nouveau Nom :");
						 String NewName = sc.next();
						 this.setAuteur(NewName);
						 break;
				case 2 : System.out.println("Donnez un nouveau Titre :");
						 String NewTitle = sc.next();
						 this.setTitre(NewTitle);
						 break;			
				case 3 : System.out.println("Donnez un nouveau Prix :");
						 double NewPrice = sc.nextDouble();
						 this.setPrix(NewPrice);
						 break;
				case -1 : break;
				default :  System.out.println("Valeur Invalide(1-Nom auteur..-Titre du livre.. 3-Prix du livre.. -1 Sortir)");
						 break;
			}
			if (Choice != -1) {
				System.out.println("Que voulez-vous changer encore?(1-Nom auteur..-Titre du livre.. 3-Prix du livre.. -1 Sortir)");
			}
		}
	}
	
	public static void main (String[]args) {
		Livre First_Book = new Livre ();
		Livre Second_Book = new Livre ("Badr","Cadr",69.99);
		System.out.println ("Titre du premier livre:");
		First_Book.Afficher ();
		System.out.println ("----------------------------");
		System.out.println ("Titre du second livre:");
		Second_Book.Afficher();
		System.out.println ("----------------------------");
		Scanner sc = new Scanner(System.in);
		String Answer;
		int Book_Nbr;
		boolean Inside_Change = false;
		while (!Inside_Change) {
			System.out.println("Voulez-vous changer des informations sur les livres? (Oui,Non)");
			Answer = sc.next();
			if (Answer.equals("Oui")|| Answer.equals("oui")) {
				System.out.println("Voulez-vous changer le Livre 1 ou 2 ? (1,2)(-1 pour Annuler)");
				Book_Nbr = sc.nextInt ();
				switch(Book_Nbr) {
				case 1 : First_Book.ChangerInformations();break;
				case 2 : Second_Book.ChangerInformations();break;
				case -1: break;
				default :	System.out.println("Valeur Invalide(1-Livre 1.. 2-Livre 2");
				 		 	break;
				}
			} else if (Answer.equals("Non")|| Answer.equals("non")) {
				Inside_Change = true;
				break;
			} else {
				System.out.println("Valeur invalide..");
			}
		}
		System.out.println ("*Prix Mis à jour des livres*");
		System.out.println ("Titre du premier livre:");
		First_Book.Afficher ();
		System.out.println ("----------------------------");
		System.out.println ("Titre du second livre:");
		Second_Book.Afficher();
		System.out.println ("----------------------------");
		sc.close();
		}
}
