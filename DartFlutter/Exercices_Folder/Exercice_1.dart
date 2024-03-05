class vecteur {
	double _x;
	double _y;
	double _z;
	void initialise(_x,_y,_z){
		this._x = x;
		this._y = y;
		this._z = z;
	}
	void multiplie(double value) {
		this._x * value = x;
		this._y * value = y;
		this._z * value = z;
	}
	void affiche(){
		print ("Vecteur ($x,$y,$z)");
	}
}
void main () {
	vecteur V1 (1.2,1.5,1.9);
	v1.multiplie(2);
	v1.affiche();
}
