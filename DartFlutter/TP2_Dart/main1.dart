import "point.dart";

void main () {
	var p1 = Point (x:10,y:20);
	p1.afficher ();
	p1._x = 10;
	p1.afficher ();
}

