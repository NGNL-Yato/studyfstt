package TD_TP1_2;

/* Dans un programme écrit en Langage JAVA, essayer de:
 * ➢ Créer et initialiser une matrice contenant deux tableaux de 2
 * et 3 points respectivement ?
 * ➢ Créer 5 objets de type "Point" ?
 * ➢ Affecter ces 5 objets aux 5 éléments de la matrice ?
 */
public class Point {
	private int x;
	private int y;
	public Point () {};
	public Point (int _x,int _y) {
		x = _x;
		y = _y;
	}
	public String Data () {
		return "(X=" + this.x + ",Y=" + this.y+")";
	}
	public static void main (String [] args) {
		Point [][] MatricedePoint;
		MatricedePoint = new Point [2][];
		MatricedePoint [0] = new Point [2];
		MatricedePoint [1] = new Point [3];
	
		Point P1 = new Point ( 5,1 );
		Point P2 = new Point ( 9,15 );
		Point P3 = new Point ( 2,7 );
		Point P4 = new Point ( 18,16 );
		Point P5 = new Point ( 4,50 );
		
		MatricedePoint [0][0] = P1;
		MatricedePoint [0][1] = P2;
		MatricedePoint [1][0] = P3;
		MatricedePoint [1][1] = P4;
		MatricedePoint [1][2] = P5;
		
		System.out.println("(Boucle ForEach) Le Tableau contient : ");
		
		for (Point [] colonne : MatricedePoint ) { //boucle forEach (Type Variable : tableau)
			for (Point point : colonne) {
				System.out.print(point.Data() + "  ");//Affichage de tous les points x et y de chaque ligne
			}
			System.out.println(""); //Saut de ligne 
		}
		System.out.println("(Boucle For) Le Tableau contient : ");
		for (int i =0; MatricedePoint.length > i; i++) { // 2 boucle for classique pour parcourir la premiere ligne puis la deuxieme
			for (int j =0; MatricedePoint[i].length > j;j++) {
				System.out.print(MatricedePoint[i][j].Data() + " ");
			}
			System.out.println("");
		}
	}
}
