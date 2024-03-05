class Classe1 {
	//Definition de la methode call qui cree : class callable 
	String call(String a, String b, String c) => "Bonjouer :$a$b$c";
}
void main () {
	//Creation d'une instance de la classe 
	var abc = Classe1 ();
	//Appeler la classe a travers son instance
	var abc_out = abc ("aa","bb","cc");
	//Printing the output
	print (abc_out);
}

