package Exercice_3;

public class ListeDeDocuments {
	private Document [][] Documents;

    public ListeDeDocuments(int row, int col) {
        Documents = new Document[row][col];
    }
    public void insertDocument(Document doc, int row, int column) {
        if (row >= 0 && row < Documents.length && column >= 0 && column < Documents[0].length) {
        	Documents[row][column] = doc;
        } else {
            System.out.println("Set valid row and col numbers");
        }
    }
    public void tousLesAuteurs() {
        System.out.println("Liste des numéros de document avec les auteurs si ils sont només:");
        for (int i = 0; i < Documents.length; i++) {
            for (int j = 0; j < Documents[i].length; j++) {
                Document document = Documents[i][j];
                if (document != null) {
                    if (document instanceof Livre) {
                        Livre livre = (Livre) document;
                        System.out.println("Numéro: " + document.getID() + ", Auteur: " + livre.getAuthor());
                    } else if (document instanceof Dictionnaire) {
                        Dictionnaire dictionnaire = (Dictionnaire) document;
                        System.out.println("Numéro: " + document.getID() + ", Langue: " + dictionnaire.getLanguage());
                    } else {
                        System.out.println("Numéro: " + document.getID() + "Sans Auteur.");
                    }
                }
            }
        }
    }
    public void tousLesDocuments() {
        System.out.println("Liste des documents:");
        for (int i = 0; i < Documents.length; i++) {
            for (int j = 0; j < Documents[i].length; j++) {
                Document document = Documents[i][j];
                if (document != null) {
                    System.out.println(document.toString());
                }
            }
        }
    }
}
