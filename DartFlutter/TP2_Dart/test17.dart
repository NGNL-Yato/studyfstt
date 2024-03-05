class Point {
	int _x = 0;
	int _y = 0;
	Point ({int x = 0, int y = 0}) {
		this._x = x;
		this._y = y;
	}
	void afficher () {
		print ("Point ($_x,$_y)");
	}
}

void main () {
	var p1 = Point (x:10,y:20);
	p1.afficher ();
	p1._x = 50;
	p1.afficher ();
}
