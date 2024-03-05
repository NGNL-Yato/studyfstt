class classe1 {
	String nom = "";
	String get getnom{return nom;}
	set setnom (String nom1){ nom = nom1;}
}
void main () {
	classe1 c1 = classe1 ();
	c1.setnom = "nomOk";
	print ("Welcome to ${c1.getnom}");
}	
