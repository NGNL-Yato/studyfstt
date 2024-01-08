package Exercice1_cc2021;

public class Enfant2 extends Enfant1{
	int z;
	Enfant2(int k,int l, int m) {
		super (k,l);
		z=m;
	}
	int ajoute (int a) {
		return x+3*a;
	}
	public void moi () {
		super.moi();
		System.out.println("z = "+ z);
	}
}
