package Exercice1_cc2021;

public class TestExam {
	public static void main (String args[]) {
		int a = 10;
		Parent p = new Parent (20);
		p.moi();
		System.out.println("ajoute ("+a+")="+p.ajoute(a));
		Enfant1 e1 = new Enfant1(5,15);
		e1 = new Enfant1 (5,15);
		e1.moi();
		System.out.println("ajoute ("+a+")="+e1.ajoute(a));
		Enfant2 e2 = new Enfant2(2,4,6);
		e2.moi();
		System.out.println("ajoute ("+a+")="+e2.ajoute(a));
		//La class Enfant1 a pour attribut x et y
		//La class Enfant2 a pour attribut x,y et z
	}
}


