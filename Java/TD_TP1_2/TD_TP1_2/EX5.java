package TD_TP1_2;
import java.util.*;

/*Ecrire un programme Java qui lit un tableau à partir du clavier puis
 * affiche son maximum (maximum des éléments entrés au clavier)?.
 */
public class EX5 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Donner la taille du tableau : ");
		int Size = sc.nextInt();
		int[] Tab = new int[Size];
		for ( int i = 0;i < Size;i++ ) {
			System.out.println("Entrez le nombre numéro "+ (i+1) +" : ");
			Tab[i] = sc.nextInt();
		}
		Arrays.sort(Tab);
		System.out.println("L'élément maximum du tableau est : " + Tab[Size-1]);
	}
}
