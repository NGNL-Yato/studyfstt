package Exercice_3;

import java.util.Scanner;

public class Livre extends Document {
	private String Author;
	private int Page_Number;
	public Livre (int ID,String titre) {
		super(ID,titre);
	}
	public Livre (int ID) {
		super (ID);
	}
	public Livre (String Aut,int P_nbr,int ID,String titre) {
		super (ID,titre);
		this.Author = Aut;
		this.Page_Number = P_nbr;
	}
	public int getPage_Number () {
		return this.Page_Number;
	}
	public String getAuthor () {
		return this.Author;
	}
	public void setPage_Number (int nbr) {
		this.Page_Number = nbr;
	}
	public void setAuthor (String person) {
		this.Author = person;
	}
    public String toString() {
        return "Livre [Author=" + Author + ", Page_Number=" + Page_Number + ", " + super.toString() + "]";
    }
    public void Add_Book () {
    	System.out.println("Give me The Author : ");
    	Scanner sc = new Scanner(System.in);
    	String Aut = sc.next();
    	this.Author = Aut;
    	System.out.println("Give me The Page Number : ");
    	int Page_nbr = sc.nextInt();
    	this.Page_Number = Page_nbr;
    }
}
