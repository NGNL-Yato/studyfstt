package TD_TP1_2;
/*Ecrire un programme, qui permet de calculer la
 * somme des entier de 1 à 10, en utilisant:
 * i) La boucle for;
 * ii) La boucle do...while;
 * iii) La boucle while ? 
 */
public class EX2 {
	
	private int somme;
	
	public EX2() {
		somme = 0;
	}
	//Boucle for 
	public int Somme_boucle_for() {
		for (int i = 1;i <= 10;i++ ) {
			somme = somme + i;
		}
		return somme;
	}
	//Boucle While
	public int Somme_boucle_while () {
		this.somme = 0;
		int i = 1;
		while (i <= 10) {
			somme = somme + i;
			i++;
		}
		return somme;
	}
	//Boucle do..While
	public int Somme_boucle_do_while () {
		this.somme = 0;
		int i = 1;
		do {
			somme = somme + i;
			i++;
		} while (i <= 10);
		return somme;
	}
	public static void main(String[] args) {
        EX2 Sommation = new EX2();
        int Somme_Total = Sommation.Somme_boucle_for();
        System.out.println("Somme Boucle for : " + Somme_Total);
        Somme_Total = Sommation.Somme_boucle_while();
        System.out.println("Somme Boucle while : " + Somme_Total);
        Somme_Total = Sommation.Somme_boucle_do_while();
        System.out.println("Somme Boucle do ... while : " + Somme_Total);
	}

}


