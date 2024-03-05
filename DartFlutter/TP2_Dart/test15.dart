class Point {
	int x = 0;
	int y = 0;
	void move (int x1, int y1){
		this.x = x1;
		this.y = y1;
	}
	void afficher () {
		print ("Point($x,$y)");
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
