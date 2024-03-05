class Point {
	int _x = 0;
	int _y = 0;
	Point ({int x = 0, int y = 0}) {
		this._x = x;
		this._y = y;
	}
	afficher () {
		print ("Point (x=$_x,y=$_y)");
	}
}
