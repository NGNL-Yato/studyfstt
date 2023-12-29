package Exercice_3;

import java.util.Scanner;

public class Dictionnaire extends Document {
	private String Language;
	private int Tome_Number;
	public Dictionnaire (int ID,String titre) {
		super(ID,titre);
	};
	public Dictionnaire (String Lang,int Tome_nbr,int ID,String titre) {
		super(ID,titre);
		this.Language = Lang;
		this.Tome_Number = Tome_nbr;
	}
	public void setLanguage (String Lang) {
		this.Language = Lang;
	}
	public void setTome_Number (int nbr) {
		this.Tome_Number = nbr;
	}
	public int getTome_nbr () {
		return this.Tome_Number;
	}
	public String getLanguage () {
		return this.Language;
	}
    public String toString() {
        return "Dictionnaire [Language=" + Language + ", Tome_Number=" + Tome_Number + ", " + super.toString() + "]";
    }
    public void Add_Dictionnaire () {
    	System.out.println("Give me The Language : ");
    	Scanner sc = new Scanner(System.in);
    	String Lang = sc.next();
    	this.Language = Lang;
    	System.out.println("Give me The Tome Number : ");
    	int Tome_nbr = sc.nextInt();
    	this.Tome_Number = Tome_nbr;
    	sc.close();
    }
}
