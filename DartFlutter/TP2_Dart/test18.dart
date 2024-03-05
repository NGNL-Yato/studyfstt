
class Point {
	int x;
	int y;
	static int _compteur = 0;
	Point ({this.x = 0,this.y = 0}){
	_compteur++;
	}
}
void main () {
	var p1 = new Point ( x:20,y:44);
	var p2 = new Point ( x :30,y:50 );
	print (Point._compteur);
}
