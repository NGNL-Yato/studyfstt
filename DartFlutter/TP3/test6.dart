abstract class Forme {
double surface ();
}
class Cercle extends Forme {
	double rayon;
	Cercle ({this.rayon = 0});
	@override
	double surface () => 3.14*rayon*rayon;
}
void main () {
	var cercle = Cercle (rayon : 10);
	print ("La surface du cercle est : ${cercle.surface()}");
}
