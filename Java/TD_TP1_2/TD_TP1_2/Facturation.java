package TD_TP1_2;
/* Il s’agit d’un programme de facturation avec remise. Il lit en donnée un simple
 * prix hors taxes, en DH, et calcule le prix TTC, en DH, correspondant (avec un taux
 * de TVA constant de 18,6%). Il établit ensuite une remise dont le taux dépend de
 * la valeur ainsi obtenue, à savoir :
 * • 0 % pour un montant inférieur à 1 000 DH,
 * • 1 % pour un montant supérieur ou égal à 1 000 DH et inférieur à 2 000 DH,
 * • 3 % pour un montant supérieur ou égal à 2 000 DH et inférieur à 5 000 DH,
 * • 5 % pour un montant supérieur ou égal à 5 000 DH.
 * Ce programme est accompagné de deux exemples d’exécution.
 */
public class Facturation {
	private float TVA_base;
	private float Prix_TTC;
	private float Prix_HT;
	public Facturation (float Prix) {
		Prix_HT = Prix;
		TVA_base = 18.6f;
	}
	public float Calcul_Facture () {
		if (Prix_HT <= 0 ) {
			return 0;
		} else if (Prix_HT <= 0 && Prix_HT < 1000.00) {
	       Prix_TTC = Prix_HT - (Prix_TTC * TVA_base);
	    } else if (Prix_HT >= 1000 && Prix_HT < 2000) {
            Prix_TTC = Prix_HT - (Prix_HT * ((TVA_base - 1)/ 100));
        } else if (Prix_HT >= 2000 && Prix_HT < 5000) {
            Prix_TTC = Prix_HT - (Prix_HT * ((TVA_base - 3)/ 100));
        } else {
            Prix_TTC = Prix_HT - (Prix_HT * ((TVA_base - 5)/ 100));
        }
        return Prix_TTC;
	}
    public static void main(String[] args) {
        Facturation Facture1 = new Facturation(500);
        float Prix_Final1 = Facture1.Calcul_Facture();
        System.out.println("Total with Tax : " + Prix_Final1);

        Facturation Facture2 = new Facturation(1500);
        float Prix_Final2 = Facture2.Calcul_Facture();
        System.out.println("Total with Tax : " + Prix_Final2);
        
        Facturation Facture3 = new Facturation(3000);
        float Prix_Final3 = Facture3.Calcul_Facture();
        System.out.println("Total with Tax : " + Prix_Final3);
        Facturation Facture4 = new Facturation(10000);
        float Prix_Final4 = Facture4.Calcul_Facture();
        System.out.println("Total with Tax : " + Prix_Final4);
    }
}

