void main () {
	//Prendre la date et l'heure actuelle
	var now = DateTime.now ();
	print (now);
	//Creer un nouveau DateTime avec time zone local
	var dt = DateTime(2024);
	print (dt);
	//Specify the month and day.
	dt = DateTime(2024, 1, 4);
	print (dt);
}
