class Point {
	int x = 0;
	int y = 0;
	void move (int x1, int y1){
		x = x1;
		y = y1;
	}
	void afficher () {
		print ("La valeur de x = $x et y = $y");
	}
}

void main () {
	var p1 = Point ();
	p1.x = 10;
	p1.y = 20;
	var p2 = Point ()..x = 30 ..y = 40;
	p1.afficher();
	p1.move(50,60);
	p1.afficher();
	p2.afficher();
	print (p2 is Point);
}
