package TD_TP1_2;
import java.util.*;
/* Ecrire un petit programme en Java qui utilise un tableau de réels
 * pour déterminer le nombre d’étudiants d’une classe ayant une note
 * supérieure à la moyenne de la classe.
 */
public class EX4 {
	private String Nom;
	private String Prenom;
	private double Note;
	public EX4 (String Name,String S_Name,double Nbr) {
		Nom = Name;
		Prenom = S_Name;
		Note = Nbr;
	}
    public double getNote() {
        return Note;
    }
	public static void main (String[] args) {
		EX4 Eleve_1 = new EX4 ("Eleve1","P1",5.4);
		EX4 Eleve_2 = new EX4 ("Eleve2","P2",18);
		EX4 Eleve_3 = new EX4 ("Eleve3","P3",13.5);
		EX4 Eleve_4 = new EX4 ("Eleve4","P4",9.2);
		EX4 Eleve_5 = new EX4 ("Eleve5","P5",8.3);
		EX4 Eleve_6 = new EX4 ("Eleve6","P6",11.6);
        EX4[] Students = {Eleve_1, Eleve_2, Eleve_3, Eleve_4, Eleve_5, Eleve_6};
        Arrays.sort(Students,Comparator.comparingDouble(EX4::getNote).reversed());
       /* Vu que les elements sont trie du plus petit au plus grand on utilise
        * la méthode reversed pour inverser l'ordre de notre Tableau pour avoir 
        * du plus grand au plus petit.
        */
        for (int i = 1; i < 7;i++ ) {
        	System.out.println("L'élève classé "+i+" est : "+Students[i-1].Nom+" "+ Students[i-1].Prenom + " avec la note : " + Students[i-1].Note);
        }
        double Moyenne = 0 ;
        for (int j = 1; j < 7;j++ ) {
        	Moyenne += (Students[j-1].getNote())/(j+1);
        } 
        System.out.println("La note moyenne de la classe est :" + Moyenne);
	}
	
}
