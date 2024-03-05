import "dart:io";

void Test (nbr) {
	if((nbr % 2) == 0) {
		print ("Divisible par 2");
	} else {
		print ("Non divisble par 2");
	}
}
void main() {
	print("Entrez un nombre :");
	int nbr = int.parse(stdin.readLineSync()!);
	Test (nbr);
}
