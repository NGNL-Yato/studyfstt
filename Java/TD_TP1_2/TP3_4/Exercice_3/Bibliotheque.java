package Exercice_3;
import java.util.*;
public class Bibliotheque {
	public static void main (String []args) {
		System.out.println("Give a size to the library : ");
        Scanner sc = new Scanner (System.in);
        int size = sc.nextInt();
        int IDS = 0;
        ListeDeDocuments listeDeDocuments = new ListeDeDocuments(size, size);
        Livre livre = new Livre("Mjid", 100, ++IDS, "MIN HOUNA ILA HOUNALIKA");
        Dictionnaire dictionnaire = new Dictionnaire("French", 2, ++IDS, "LAROUSSE");
        int LID = 0;
        listeDeDocuments.insertDocument(livre, LID, LID);
        LID++;
        listeDeDocuments.insertDocument(dictionnaire, LID, LID);
        LID++;
        listeDeDocuments.tousLesDocuments();
        boolean Adding_Elem = false;
        while (!Adding_Elem) {
        	System.out.print("Do you want to add new Documents inside the Library? (yes/no)");
        	String Choice = sc.next();
        	if(Choice.equals("yes") || Choice.equals("Yes")) {
            	System.out.println("What kind of Documents you want to add ?\n[1]Livre \n[2]Dictionnaire \n[-1] Quitter)");
            	int Doc_Typ = sc.nextInt();
            	switch(Doc_Typ) {
                case 1:
                	System.out.println("Add Doc title : "); 
                	String titre = sc.next();
                    Livre newLivre = new Livre(++IDS);
                    newLivre.setTitre(titre);
                    newLivre.Add_Book();
                    listeDeDocuments.insertDocument(newLivre, LID, LID);
                    LID++;
                    break;
                case 2:
                	System.out.println("Add Doc title : "); 
                	String titreDic = sc.next();
                    Dictionnaire newDictionnaire = new Dictionnaire(++IDS, titreDic);
                    newDictionnaire.Add_Dictionnaire();
                    listeDeDocuments.insertDocument(newDictionnaire, 1, 1);
                    LID++;
                    break;
            	case -1:
            		default: System.out.println("Invalid Choice... Retry...");
            		Adding_Elem = true;
            		break;
            	}
        	} else if (Choice.equals("no") || Choice.equals("No")) {
        		Adding_Elem = true;
        	} else {
        		System.out.println("Invalid Syntax ..");
        	}
        }
        System.out.println("*************************************************");
        listeDeDocuments.tousLesDocuments();
	}
}
