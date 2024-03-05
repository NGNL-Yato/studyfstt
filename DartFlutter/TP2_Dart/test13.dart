class Point {
	int x = 0;
	int y = 0;
}

void main () {
	var p1 = Point ();
	p1.x = 10;
	p1.y = 20;
	var p2 = Point ()..x = 30 ..y = 40;
}
