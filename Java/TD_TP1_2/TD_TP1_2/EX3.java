package TD_TP1_2;
import java.util.Scanner;
/* ■ Ecrire un programme qui permet de créer
 * des comptes bancaires pour des clients
 * ■ Le programme permet de faire un versement
 * pour le compte d’un client
 * ■ Le programme permet de faire un débit pour
 * le compte de chaque client
 * ■ Le programme permet d’afficher l’état de
 * compte de client 
 */

public class EX3 {
	private String First_Name;
	private String Family_Name;
	private double Current_Money;
	
	public EX3() {} 
	public EX3 (String F_Name, String Fam_Name, double Money) {
		First_Name = F_Name;
		Family_Name = Fam_Name;
		Current_Money = Money;
	}
	public void SetFirstName (String Name) {
		this.First_Name = Name;
	}
	public void SetFamilyName (String Name) {
		this.Family_Name = Name;
	}
	public void SetCurrent_Money (double Money) {
		this.Current_Money = Money;
	}
	public void Versement (double Montant) {
		Current_Money = Current_Money + Montant;
	}
	public void Debit (double Montant) {
		Current_Money = Current_Money - Montant;
	}
	public void Display_Acc_Info () {
		System.out.println(First_Name + " " + Family_Name + " a dans son compte : " + Current_Money + " DH.");
	}
	public static void main(String[] args) {
		EX3 Compte_1 = new EX3 ("Zakaria","Boz",10324.6);
		Compte_1.Display_Acc_Info();
		EX3 Compte_2 = new EX3 ("Hamza","Ben",18324.6);
		Compte_2.Display_Acc_Info();
		EX3 Compte_3 = new EX3 ();
		Compte_3.SetFirstName("Ziyad");
		Compte_3.SetFamilyName("Mo");
		Scanner sc = new Scanner(System.in);
		System.out.println("Donnez le Prénom du nouveau client :");
		String First_Name = sc.next();
		
		System.out.println("Donnez le Nom de Famille du nouveau client :");
		String Family_Name = sc.next();
		
		System.out.println("Donnez le Montant initial du nouveau client :");
		int Money_In_Bank = sc.nextInt();
		
		EX3 Compte_4 = new EX3 (First_Name,Family_Name,Money_In_Bank);
		Compte_4.Display_Acc_Info();

		Compte_3.SetCurrent_Money(12324.31);
		Compte_3.Display_Acc_Info();
		Compte_1.Versement(100);
		Compte_1.Display_Acc_Info();
		Compte_2.Debit(321.31);
		Compte_2.Display_Acc_Info();
		Compte_3.Versement(3314.5);
		Compte_3.Display_Acc_Info();
		Compte_3.Debit(5533.93);
		Compte_3.Display_Acc_Info();		
		
		Compte_4.Versement(100);
		Compte_4.Display_Acc_Info();
	}
	
}
