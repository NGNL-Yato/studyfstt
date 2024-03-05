class Point {
	int x = 0;
	int y = 0;
	Point (int x, int y) {
		this.x = x;
		this.y = y;
	}
	void afficher () {
		print ("Point ($x,$y)");
	}
}

void main () {
	var p1 = Point (10,20);
	p1.afficher();
}
