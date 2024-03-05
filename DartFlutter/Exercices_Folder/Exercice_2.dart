class vecteur {
	double _x;
	double _y;
	double _z;
	vecteur(double x, double y,double z){
		this._x = x;
		this._y = y;
			this._z = z;
	}
	void multiplie(double value) {
		this._x *= value;
		this._y *= value;
		this._z *= value;
	}
	void affiche(){
		print ("Vecteur ($_x,$_y,$_z)");
	}
	void add (double a, double b, double c) {
		this._x += a;
		this._y += b;
		this._z += c;
	}
}
void main () {
	vecteur v1 = vecteur (1.2,1.5,1.9);
	v1.multiplie(2);
	v1.affiche();
}
