package Exercice1_cc2021;
public class Parent {
	int x;
	Parent(int k){
		x=k;
	}
	int ajoute (int a) {
		return x+a;
	}
	public void moi () {
		System.out.println("x ="+x);
	}
}