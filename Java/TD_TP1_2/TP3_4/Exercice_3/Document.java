package Exercice_3;

public class Document {
	private int ID_Document;
	private String Title;
    public Document(int ID, String titre) {
        this.ID_Document = ID;
        this.Title = titre;
    }
    public Document(int ID) {
        this.ID_Document = ID;
    }
    public int getID () {
		return this.ID_Document;
	}
	public String getTitle () {
		return this.Title;
	}
	public void setID (int ID) {
		this.ID_Document = ID;
	}
	public void setTitre (String titre) {
		this.Title = titre;
	}
    public String toString() {
        return "Document [ID=" + ID_Document + ", Titre=" + Title + "]";
    }
}
